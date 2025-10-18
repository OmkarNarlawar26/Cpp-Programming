#include<iostream>
using namespace std;

class Arithmatic
{
    public:
        int iNo1;
        int iNo2;

        Arithmatic()  // Default Constructor
        {
            iNo1 = 0;
            iNo2 = 0;
        }

        Arithmatic(int A, int B)  // Paramatrizsed Constructor
        {
            iNo1 = A;
            iNo2 = B;
        }

        int Addition()
        {
            int iAns = 0;
            iAns = iNo1 + iNo2;
            return iAns;
        }

        int Substraction()
        {
            int iAns = 0;
            iAns = iNo1 - iNo2;
            return iAns;
        }
};

int main()
{
    Arithmatic aobj1(11,10);

    int iRet = 0;

    iRet = aobj1.Addition();
    cout<<"Addition is : "<<iRet<<"\n";

    iRet = aobj1.Substraction();
    cout<<"Substraction is : "<<iRet<<"\n";

    return 0;
}
