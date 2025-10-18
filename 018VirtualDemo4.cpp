#include<iostream>
using namespace std;

#pragma pack(1)
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
        virtual void sun()
        {
            cout<<"Inside Base sun \n";
        }
        virtual void bun()
        {
            cout<<"Inside Base bun \n";
        }  
};

#pragma pack(1)
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
    cout<<sizeof(Base)<<"\n";       // 16 Byte
    cout<<sizeof(Derived)<<"\n";    // 20 Byte
    
    Base *bp = new Derived();      // UpCasting

    /*
    bp->fun();      // Base fun
    bp->gun();      // Base gun
    bp->sun();      // Base sun
    // bp->run();      // ERROR
    // bp->mun();      // ERROR
    bp->bun();      // Base bun
    */

    return 0;
}
