#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int(33);
    int *ptr1=ptr;

    cout << *ptr << endl;
    cout << ptr << endl;

    if(!(ptr==nullptr))
    {
        cout << *ptr1 << endl;
        cout << ptr1 << endl;
    }

    else 
    {
        cout << "Warning!!!!";
    }

    delete ptr;
    ptr = nullptr;

     if(!(ptr==nullptr))
    {
        cout << *ptr1 << endl;
        cout << ptr1 << endl;
    }

    else 
    {
        cout << "Warning!!!!";
    }
}