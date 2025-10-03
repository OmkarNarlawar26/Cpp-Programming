#include<iostream>
using namespace std;

class Demo
{
    public:
        void Display()
        {
            cout<<"inside Display";
        }

};

int main()
{
    Demo dobj;

    cout<<sizeof(Demo);    // 1 byte

    return 0;
}
