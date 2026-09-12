#include<iostream>
using namespace std;

class Vehicle{
    public :
    string type= "None";
        Vehicle() = default;
        Vehicle(string type_param , int wheels_param){
            type=type_param;
            wheels=wheels_param;
        }

    private :
        int wheels = 0;
        
};

class Car : private Vehicle{
    public : 
        Car() = default;
        Car(string color_param,string name_param){
            color=color_param;
            name = name_param;
            type="Car";
            wheels=4;
        }
        using Vehicle::type;

        void info(){
            cout << name << endl;
            cout << type << endl;
            cout << wheels << endl;
            cout << color << endl;
        }

    protected :
        using Vehicle::wheels;

    private :
        string color;
        string name;
};

class scooter : public Car{
    public :
        void inf()
        {
            cout << type << endl;
            cout << wheels << endl;
        }

};

int main(){
    Vehicle v1;
    Car c1("Red","Mobilio");
    c1.info();
    scooter s1;
    s1.inf();
    cout << c1.type << endl;
    //cout << c1.wheels << endl;

}