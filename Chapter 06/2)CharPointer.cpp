#include <iostream>
#include <string>
using namespace std;

int main()
{
    char x = 'd';
    char *y = &x;

    cout << y << endl;
    cout << *y << endl;

    const char *ptr = "Hello world";

    cout << ptr << endl;
    cout << *ptr << endl;

    string s= "Hello worlds" ;
    string *st = &s;

    cout << st << endl;
    cout << *st << endl;

}