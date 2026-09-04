#include <iostream>
using namespace std;

int main()
{
    int *ptr = nullptr;

    if(!(ptr==nullptr))
    {
        cout << "Valid address" << endl;
    }

    else cout << "Invalid address" << endl;

    if(ptr)
    {
        cout << "Valid address" << endl;
    }

    else cout << "Invalid address" << endl;
}