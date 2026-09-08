#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.141592653589793;

class Cylinder{
    private :

        double radius=10;
        double height=10;

    public :

        Cylinder() = default;

        Cylinder(double rad,double hgt){
            radius=rad;
            height=hgt;
        }

        //getters
        double get_rad()
        {
            return radius;
        }

        double get_hgt()
        {
            return height;
        }

        //setters
        double set_rad(double radpar)
        {
            radius=radpar;
        }

        double set_hgt(double hgtpar)
        {
            height=hgtpar;
        }
};


int main()
{
    Cylinder c1;

    cout << c1.get_hgt() << endl;
    cout << c1.get_rad() << endl;

    c1.set_hgt(20);
    c1.set_rad(20);

    cout << c1.get_hgt() << endl;
    cout << c1.get_rad() << endl;

}