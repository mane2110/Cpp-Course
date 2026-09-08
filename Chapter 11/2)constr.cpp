#include <iostream>
#include <cmath>

using namespace std;

class Cylinder{
    private :
        double radius;
        double height;

    public :
        double volume()
        {
            return M_PI*radius*radius*height;
        }

        Cylinder(){
            radius=10;
            height=20;
        }

        Cylinder(double rad,double hgt){
            radius=rad;
            height=hgt;
        }
};


int main()
{
    Cylinder c1(5,5);

    cout << c1.volume() << endl;
}