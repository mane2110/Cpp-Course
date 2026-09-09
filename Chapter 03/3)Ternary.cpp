#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Enter your marks: ";
    int a;
    cin >> a;
    string result = (a>35) ? "Pass" : "Fail";
    cout << result;
    return 0;
}