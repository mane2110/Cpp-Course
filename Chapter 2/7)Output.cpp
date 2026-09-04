#include <iostream>
#include <iomanip>
#include <unistd.h>
using namespace std;

int main()
{
    
    //endl
    cout << "Hello Worls" << endl;

    //flush
    cout << "Loading";
    cout << '.';
    cout << '.';
    cout << '.';
    cout << endl;
 
    cout << "Loading";
    cout.flush();
    sleep(1);

    cout << '.';
    cout.flush();
    sleep(1);

    cout << '.';
    cout.flush();
    sleep(1);

    cout << '.';
    cout.flush();

    cout << endl;
    
    //setw
    cout << setw(10) << "hello" << endl;

    cout << left;

    cout << setw(10) << "hello" << endl;

    cout << setfill('*') << setw(10) << "hello" << endl;

    cout << right;

    cout << setfill('*') << setw(10)  << "hello" << endl;

   

    //boolalpha

    bool x=true;
    cout << x << endl;

    cout << boolalpha;

    cout << x << endl;

    //showpos

    int a=45;
    int b=-45;

    cout << a << endl;
    cout << b << endl;

    cout << showpos;
    
    cout << a << endl;
    cout << b << endl;


    cout << showbase;
    cout << dec << a << endl;
    cout << oct << a << endl;
    cout << hex << a << endl;

     

    double r = 3;

    cout << showpoint;
    cout << r << endl;




}