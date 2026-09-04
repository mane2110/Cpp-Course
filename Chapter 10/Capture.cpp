#include <iostream>
using namespace std;

int main()
{
    /*
   int a=10;
   int b=12;
   auto res=[a,b](){
    cout << a+b;
   };

   res();

   int c = 100;

   auto ans = [c]()
    {
        cout << c << endl;
    };


   for(int i=0;i<5;i++)
   {
    ans();
    cout << c << endl;
    c++;
   }
   
   int c = 100;

   auto ans = [&c]()
    {
        cout << c << endl;
    };


   for(int i=0;i<5;i++)
   {
    ans();
    cout << c << endl;
    c++;
   }
*/
   

int a=10;
int b=20;
int c=30;

auto ans = [=]()
{
    cout << a+b+c << endl;
};

auto res = [&](){
    cout << a+b+c << endl;
};

res();
ans();

a++;
b++;
c++;

res();
ans();

}