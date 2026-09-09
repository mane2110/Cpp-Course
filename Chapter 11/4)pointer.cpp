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

        double volume()
        {
            return M_PI*radius*radius*height;
        }

};


int main()
{
    Cylinder *c2 = new Cylinder(20,30);
    cout << (*c2).volume() << endl;
    cout << c2->volume() << endl;

    delete c2;
}