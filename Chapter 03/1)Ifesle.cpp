#include <iostream>
using namespace std;

int main()
{
    int marks;
    cin >> marks;

    if(marks>=90) cout << "Excellent marks";
    else if(marks>=70) cout << "Good marks";
    if(marks >= 50) cout << "Average Marks";
    else cout << "Fails";

    return 0;
}