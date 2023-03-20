#include <iostream>
using namespace std;
class FOODCOURT
{
    string cust_name;
    int id;
    float balance;
public:
   FOODCOURT()
    {
        id=0;
        balance=0;
    }
    void getdetail(int id)
    {
        //cust_name=name;
        this->id=id;

    }
    void getdetail(float balance)
    {
        this->balance=balance;
    }
  void voucher_balance(int cost)
    {
        balance-=cost;
    }
    int find(int num)
    {
        if(id==num)
            return 0;
    }
    void print()
    {
        cout<<id<<"\t"<<balance<<"\n";
    }
};

int main()
{
    string name;
    int n,id,cost,ch;
    int balance;
    cout<<"Enter the number of customers";
    cin>>n;
    FOODCOURT cust[10];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the customer name\n";
        cin>>name;
        cout<<"Enter the voucher id\n";
        cin>>id;
        cout<<"Enter the voucher balance\n";
        cin>>balance;
        cust[i].getdetail(id);
        cust[i].getdetail(balance);
    }
   cout<<"Purchase\n";
    do
    {

        cout<<"Enter voucher id:\n";
        cin>>id;
        cout<<"Enter product cost:\n";
        cin>>cost;
        for(int i=0;i<n;i++)
        {
            if(cust[i].find(id)==0)
            {
                cust[i].voucher_balance(cost);
                break;
            }
        }
        cout<<"Do you want to continue: Press 1.Yes else press any other key";
        cin>>ch;
        if(ch==1)
            continue;
        else
            break;
    }while(1);
    cout<<"Voucher Balance\n";
    for(int i=0;i<n;i++)
    {
        cust[i].print();
    }
}
