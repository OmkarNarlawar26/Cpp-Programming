#include<iostream>
using namespace std;

int main()
{
    int length = 0;
    int *Arr = NULL;

    cout<<"Enter the number of elements : \n";
    cin>>length;

    // Step 1 : Allocate the memory
    Arr = new int[length];
    if(Arr == NULL)
    {
        cout<<"Unable to allocate memory\n";
    }
    else
    {
        cout<<"Memory gets succesfully allocated\n";
    }

    // Step 2 : Use the memory

    // Step 3 : Deallocate the memory
    delete [] Arr;

    return 0;
}
