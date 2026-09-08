#include <iostream>
#include <cmath>
#include "constant.h"
#include "cylinder.h"

using namespace std;

int main()
{
    Cylinder c1;

    cout << c1.get_hgt() << endl;
    cout << c1.get_rad() << endl;

    c1.set_hgt(20);
    c1.set_rad(20);

    cout << c1.get_hgt() << endl;
    cout << c1.get_rad() << endl;

    cout << c1.volume() << endl;

}