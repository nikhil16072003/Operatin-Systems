# codes#include <iostream>
using namespace std;
class item
{
    int number;
    float cost;
public:
    item(int a,float b);  //CONSTRUCTOR  
    void putdata()
    {
        cout<<"number:"<<number<<"\n";
        cout<<"cost:"<<cost<<"\n";
    }
    void add(item,item);
};
item::item(int a,float b)
{
    number=a;
    cost=b;
}
void item::add(item t1,item t2)
{
    number=t1.number+t2.number;
    cost=t1.cost+t2.cost;
}
int main() {
    item x(5,6.6), y(10,9.6), z(0,0);
    cout << "Object x"<<"\n";

    x.putdata();


    cout << "\nObject y"<<"\n\n";

    y.putdata();

    cout << "\nObject z"<<"\n";
    z.putdata();
    z.add(x,y);
    cout << "\nObject z"<<"\n\n";
    z.putdata();

  return 0;
}
//////////////////////////////////////////
example 2
finding area using overloding


#include <iostream>
using namespace std;
 
class construct
{
 
public:
    float area;
     
    // Constructor with no parameters
    construct()
    {
        area = 0;
    }
     
    // Constructor with two parameters
    construct(int a, int b)
    {
        area = a * b;
    }
     
    void disp()
    {
        cout<< area<< endl;
    }
};
 
int main()
{
    // Constructor Overloading
    // with two different constructors
    // of class name
    construct o;
    construct o2( 10, 20);
     
    o.disp();
    o2.disp();
    return 1;
}
