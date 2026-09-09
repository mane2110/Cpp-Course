#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a Number: " << endl;
    int x;
    cin >> x;

    cout << "Enter a Number: " << endl;
    int y;
    cin >> y;

    cout << "Operations on your numbers: " << endl;

    cout << "Addition: " << x+y << endl;
    cout << "Subtraction: " << x-y << endl;
    cout << "Multiplication: " << x*y << endl;
    cout << "Division: " << x/y << endl;
    cout << "Modulus: " << x%y << endl;
    
    return 0;
}