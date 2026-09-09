#include <iostream>
using namespace std;

int main()
{
    char a = '1';
    char b = 'k';
    char c = 'K';

    // Alphanumeric
    /*
    cout << isalnum(a) << endl;
    cout << isalnum(b) << endl;
    cout << isalnum(c) << endl;
    cout << "*************************************" << endl;

    
    cout << isalpha(a) << endl;
    cout << isalpha(b) << endl;
    cout << isalpha(c) << endl;
    cout << "*************************************" << endl;

    cout << islower(a) << endl;
    cout << islower(b) << endl;
    cout << islower(c) << endl;
    cout << "*************************************" << endl;

    cout << isupper(a) << endl;
    cout << isupper(b) << endl;
    cout << isupper(c) << endl;
    cout << "*************************************" << endl;

    char x = toupper(b);
    cout << x << endl;
    char y = tolower(c);
    cout << y << endl;
    cout << "*************************************" << endl;
    */
    string s= "Hello world hello heel e   ele  e";

    int k=0;

    for(int i=0;i<s.size();i++)
    {
        if(isblank(s[i]))
        {
            k++;
        }
    }

    cout << k;
}