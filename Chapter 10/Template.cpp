#include <iostream>
using namespace std;

template <typename T>
T maxi(T a,T b)
{
    return (a>b)?a:b;
}

template <typename T> 
T mini(T &a,T &b)
{
    cout << &a << endl;
    return (a>b)?b:a;
}

int main()
{
    
    int a=10;
    int b=11;
    /*
    int *x=&a;
    int *y=&b;
    cout << maxi(*x,*y) << endl;
    cout << maxi(1.1,1.2) << endl;
    cout << maxi('a','b') << endl;

    */

    //auto res= maxi<double>(42.3,23);
    //cout << res;

    auto result = mini(a,b);
    //cout << &a << endl;
    cout << mini(a,b);
}