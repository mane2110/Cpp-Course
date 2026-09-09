#include <iostream>
using namespace std;

int main()
{
    int var = 44;
    int &ref=var;

    cout << ref << endl ;
    cout << var << endl;

    var = 55;
    cout << var << endl;
    cout << ref << endl;

    const int &ref2=var;

    cout << ref2 << endl;

    var=66;

    cout << ref2 << endl;
}