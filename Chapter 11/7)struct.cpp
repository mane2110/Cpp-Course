#include <iostream>
#include <string>

using namespace std;

struct cat
{
    string m_name;
};

class dog{
    private :

   // int a;
    //int b;
    //size_t c;
    string d;
    //int *ptr = nullptr;

};

int main()
{
   
    cat c1;
    c1.m_name = "Pookie";
    cout << c1.m_name << endl;
    cout << sizeof(dog);
}