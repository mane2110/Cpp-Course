#include <iostream>
using namespace std;

template <typename T>
T maxi(T a,T b)
{
    return (a>b)?a:b;
}

template<>
char maxi<char>(char a,char b)
{
    cout << "hello" << endl;
    return (a>b)?a:b;
}

int main()
{
    cout << maxi(1,2) << endl;
    cout << maxi('a','b');
}