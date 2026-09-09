#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.141592653589793;

class Cylinder{
    private :

        double radius=10;
        double height=10;
        int *ptr = nullptr;

    public :

        Cylinder() = default;

        Cylinder(double rad,double hgt,int ptr_para){
            radius=rad;
            height=hgt;
            ptr = new int (ptr_para);
            cout << "Constructor: " << rad << endl;
            
        }

        ~Cylinder()
        {
            delete ptr;
            cout << "Destructor: " << radius << endl;
        }

        double volume()
        {
            return radius*height*(*ptr);
            
        }

};


void ans()
{
    Cylinder *c1 = new Cylinder(2,2,21);
    delete c1; // without these destructor wont be call as the actual Cylinder object is still sitting in heap memory but c1 is gone
}

int main()
{
    //ans();
    
    Cylinder c1(20,20,10);
    Cylinder c2(21,20,10);
    Cylinder c3(22,20,10);

    //cout << c1.volume() << endl;
    cout << "done" << endl;
    
}