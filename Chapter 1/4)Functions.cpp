#include <iostream>
using namespace std;

int addnum(int num1,int num2)
{
    int sum=num1+num2;
    return sum;
}

int main()
{
    int num1=10;
    int num2=20;

    int sum1=num1+num2;
    int sum2=addnum(10,20);
    int sum3=addnum(11,21);
    int sum4=addnum(12,22);
    int sum5=addnum(13,23);
    int sum6=addnum(14,24);

    cout << " The sum of numbers using variables:" << sum1 << endl;
    cout << "The sum of numbers using functions:" << sum2 << endl;
    cout << "The sum of numbers using functions:" << sum3 << endl;
    cout << "The sum of numbers using functions:" << sum4 << endl;
    cout << "The sum of numbers using functions:" << sum5 << endl;
    cout << "The sum of numbers using functions:" << sum6 << endl;
}