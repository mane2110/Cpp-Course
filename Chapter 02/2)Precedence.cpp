#include <iostream>
using namespace std;

int main()
{
    int a=5,b=10,c=3,d=9,e=7,f=4;

    int x= a*b+d/c+e-f;

    int y=a*(b+d)/c+e-f;

    cout << x << endl;
    cout << y << endl;
    return 0;
}