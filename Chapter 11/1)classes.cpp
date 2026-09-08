#include <iostream>
#include <cmath>

using namespace std;

class Cylinder{
    public :
        double radius=10.0;
        double height=15.0;

    public :
        double volume()
        {
            return M_PI*radius*radius*height;
        }
};

class Player{
    public:
        double height;
        double weight;

    public:
        double BMI()
        {
            return weight/(height*height);
        }
};
int main()
{
    Cylinder c1;

    cout << c1.height << endl;
    cout << c1.radius << endl;
    cout << c1.volume() << endl;

    Player p1;

    p1.height=1.81;
    p1.weight=72.8;

    cout << p1.BMI() << endl;

}