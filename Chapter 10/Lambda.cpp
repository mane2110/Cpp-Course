#include <iostream>
using namespace std;

int main()
{
    /*
    auto res = []{
        cout << "Hello" << endl;
    };

    res();

    []{
        cout << "Hello" << endl;
    }();

    auto ans=[](int a,int b)
    {
        a++;
        b++;
        return a*b;
    };
        */
     auto ans=[](int &a,int &b)
    {
        a++;
        b++;
        return a*b;
    };

    int a=9;
    int b=10;

    cout << ans(a,b) << endl;
    cout << a << endl;
    cout << b << endl;
}