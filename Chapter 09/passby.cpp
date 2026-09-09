#include <iostream>
using namespace std;

void value(int a)
{
    cout << ++a << endl;
}

void pointer(int *a)
{
    cout << ++*a << endl;
}

void ref(int &a)
{
    cout << ++a << endl;
}

int main()
{
    int x=10;
    cout << "Before: " << x << endl;
    value(x);
    cout << "After: " << x << endl;

    int y=10;
    cout << "Before: " << y << endl;
    pointer(&y);
    cout << "After: " << y << endl;

    int z= 10;
    cout << "Before: " << z << endl;
    ref(z);
    cout << "After: " << z << endl;

}   

