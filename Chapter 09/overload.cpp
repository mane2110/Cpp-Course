#include <iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}

int add(int a,int b,int c)
{
    return a*b*c;
}

double add(double a)
{
    return a*a;
}


int main()
{
      cout << add(1,2) << endl;
      cout << add(2,3,4) << endl;
      cout << add(2.4) << endl;
}   

