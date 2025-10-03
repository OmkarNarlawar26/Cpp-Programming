#include<iostream>
using namespace std;

#pragma pack(1)
class Base
{
    public:
        int i, j;
        int Addition(int a, int b)      // Concrete
        {
            return a + b;
        }
        virtual int Substraction(int a, int b) = 0;      // Abstract
};

#pragma pack(1)
class Derived : public Base
{
    public:
        int x;
        int Substraction(int a, int b)      // Concrete
        {
            return a - b;
        }
         int Multiplication(int a, int b)      // Concrete
        {
            return a * b;
        }          
};

int main()
{
   
 
    Base *bp = new Derived();      // UpCasting
    int iRet = 0;

    iRet = bp->Addition(11,10);                     // 21
    cout<<iRet<<"\n";

    iRet = bp->Substraction(11,10);                 // 1
    cout<<iRet<<"\n";

    // iRet = bp->Multiplication(11,10);            // ERROR


   
    return 0;
}