#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    int val=44;
    ptr=&val;

    cout << val << endl;
    cout << ptr << endl;

    val=45;

    cout << val << endl;
    cout << ptr << endl;

    int var = 44;

    ptr = &var;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << &var << endl;


}