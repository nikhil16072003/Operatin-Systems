#include <iostream>
using namespace std;

class item
{


public:
    int number;
    float cost;
  void getnumber(int a);
  void getcost(float b);
    void putnumber()
    {
        cout<<"number:"<<number<<"\n";

    }
    void putcost()
    {
        cout<<"cost:"<<cost<<"\n";

    }
};
void item::getnumber(int a)
{

    number=a;

}
void item::getcost(float b)
{


    cost=b;
}
class addnumber:public item
{
public:
    void add(addnumber,addnumber);

};



void addnumber::add(addnumber t1,addnumber t2)
{

    number=t1.number+t2.number;
}

class addcost:public item
{
public:
    void add(addcost,addcost);

};



void addcost::add(addcost t1,addcost t2)
{

    cost=t1.cost+t2.cost;
}

int main() {
    addnumber x,y,z;
    addcost p,q,r;

    x.getnumber(5);


    y.getnumber(10);
    p.getcost(6.6);


    q.getcost(9.6);

    z.add(x,y);
    z.putnumber();
    r.add(p,q);
    r.putcost();
  return 0;
}
