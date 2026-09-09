#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int *ptr = new int[size]{};

    if(ptr)
    {
        cout << "Dynamic array allocated" << endl;
    }

    else cout << "Warning!!!";

    for(int i=0;i<size;i++)
    {
        ptr[i]=i*3;
    }

    for(int i=0;i<size;i++)
    {
       cout << ptr[i] << endl;
    }

    for(int i=0;i<size;i++)
    {
        *(ptr+i)=i*3;
    }

    for(int i=0;i<size;i++)
    {
       cout << ptr[i] << endl;
    }

}