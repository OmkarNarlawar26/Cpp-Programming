#include<iostream>
using namespace std;

class Demo
{
    public:
    void fun(int i)
    {
        cout<<"First defination";
    }

    void fun(int i, int j)
    {
        cout<<"Second Defination";
    }
};

int main()
{
    Demo obj;
        
    obj.fun(10);
    obj.fun(10,20);

    return 0;
}