#include <iostream>
#include <string>
using namespace std;

int a=121;
int main()
{
    string b = "Hello";
    string c = b;
    string d{"Hello" ,4} ;
    string e(4,'e');
    string f{b,1,4};

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
}