#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Enter a number: " ;
    int a;
    cin >> a;

    cout << "Enter another number: ";
    int b;
    cin >> b;

    bool con=true;

    int c;
    while(con)
    {

    cout << "Choose an option from the given menu: " << endl;
    cout << "1. Find their Sums" << endl;
    cout << "2. Find their Difference" << endl;
    cout << "3. Find their Product" << endl;
    cout << "4. Exit" << endl;

    cin >> c;

    switch (c)
    {
    case 1:
        {
            cout << a+b << endl;
        }
        break;
    
        case 2:
        {
            cout << abs(a-b) << endl;
        }
        break;

        case 3:
        {
            cout << a*b << endl;
        }
        break;

        case 4:
        {
            con = false;
        }
        default:
            break;
        }

    }

    return 0;
}