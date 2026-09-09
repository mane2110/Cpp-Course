#include <iostream>
using namespace std;

int main()
{
    int x=44;
    int *ptr = new int(44);
    int **ptr1 = new int*(&x);

    cout << ptr << endl; // address of integer
    cout << *ptr << endl; // value

    cout << ptr1 << endl; // address of heap pointer
    cout << *ptr1 << endl; // address of x
    cout << &x << endl; // value of x
    cout << **ptr1 << endl;

    delete ptr;
    ptr = nullptr;

    delete ptr1;
    ptr1 = nullptr;
}