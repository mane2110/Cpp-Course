#include <iostream>
using namespace std;

int main()
{
    int a=3;
    int b=5;

    while(a<b)
    {
        cout << "India" << endl;
        ++a;
    }

    int x=0;
    int cnt=1;
    int spc=4;
    while(x<5)
    {
        int g=spc;
        while(g>0)
        {
            cout << " ";
            g--;
        }
        spc--;

        int y=0;
        while(y<cnt)
        {
            y++;
            cout << "*";
        }

        cout << endl;
        cnt+=2;
        x++;
    }
}