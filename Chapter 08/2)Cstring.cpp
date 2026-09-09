#include <iostream>
#include <cstring>
using namespace std;

int a{};
int main()
{
    /*
    const char str[] = "Hello this is Anish Mane";
    const char *str1 = "Hello this is Ankit Mane";

    cout << str << endl ;
    const char *res = str;
    int itr=0;

    while((res=strchr(res,'i'))!=nullptr)
    {
        itr++;
        res++;
    }

    cout << itr;

    
    cout << "strlen" << endl;
    cout << strlen(str) << endl;
    cout << strlen(str1) << endl;

    cout << "***************************************" << endl;

    cout << "sizeof" << endl;
    cout << sizeof(str) << endl;
    cout << sizeof(str1) << endl;

    cout << "***************************************" << endl;

    cout << "strcmp" << endl;
    cout << strcmp(str,str1) << endl;
    cout << strncmp(str,str1,22) << endl;

    cout << "***************************************" << endl;
    
    cout << "strchr" << endl;
    cout << strchr(str,'i') << endl;
    cout << strrchr(str,'i') << endl;
    */
    char a[20] = "Anish";
    char b[] = "Mane";

    cout << strcat(a,b) << endl ;
    cout << strncat(a,b,3) << endl;
    strncpy(a,b,2);
    cout << b  << endl;
    cout << a << endl;



}