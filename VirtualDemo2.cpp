#include<iostream>
using namespace std;

class Base
{
    public:
        int i, j;
        void fun()
        {
            cout<<"Inside Base fun \n";
        }
        void gun()
        {
            cout<<"Inside Base gun \n";
        }
        void sun()
        {
            cout<<"Inside Base sun \n";
        }
        void bun()
        {
            cout<<"Inside Base bun \n";
        }
        
};

class Derived : public Base
{
    public:
        int x;
        void gun()
        {
            cout<<"Inside Derived gun \n";
        }
        void sun()
        {
            cout<<"Inside Derived sun \n";
        }
        void run()
        {
            cout<<"Inside Derived run \n";
        }
        void mun()
        {
            cout<<"Inside Derived mun \n";
        }
        
};

int main()
{
    Base *bp1 = new Base();         // NoCasting
    Derived *dp1 = new Derived();   // NoCasting
    Base *bp2 = new Derived();      // UpCasting
    Derived *dp2 = new Base();      // DownCasting  ERROR

    return 0;
}
