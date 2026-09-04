#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Input and Output pracitce" << endl;

    int age = 20;
    cout << "Your age is " << age << endl;

    string name;

    cout << "Enter your name: ";
    getline(cin,name);

    string college;
    cout <<"Enter your college name: ";
    cin  >> college;

    cout << "This is your information" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout <<  "College: " << college << endl;

    cerr << "Error Message: Error Found" << endl;
    clog << "Log Message: Fund" << endl;
    return 0;
}