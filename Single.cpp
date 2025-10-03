#include<iostream>
using namespace std;

class Base   // 8
{
    public:
        int i,j;

        void fun()
        {
            cout<<"Inside Base fun\n";
        }
};

class Derived : public Base   // 12
{
    public:
        int x;

        void gun()
        {
            cout<<"Inside Derived gun\n";
        }
};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<"Size of base class object : "<<sizeof(bobj)<<"\n";
    cout<<"Size of derived class object : "<<sizeof(dobj)<<"\n";


    return 0;
}
