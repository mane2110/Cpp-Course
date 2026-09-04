#include <iostream>
using namespace std;

int main()
{
    int m=9;
    int a=0;
    for(int i=0;i<5;++i)
    {
        cout << "Godl,OG" << endl;
    }

    for(int i=0;i<5;i++)
    {
        for(int k=0;k<a;k++)
        {
            cout << " ";
        }
        a++;
        for(int j=m;j>0;j--)
        {
            cout << "*";
        } 

        m=m-2;
        cout << endl;

    }
}