#include<iostream>
using namespace std;

class Vehicle{
    public :
    
        Vehicle(){
            cout << "Vehicle Deault Constructor" << endl;
        }
        Vehicle(string type_param , int wheels_param){
            type=type_param;
            wheels=wheels_param;
        }

    protected :
        string type= "None";
        int wheels = 0;
        
};

class Car : public Vehicle{
    public : 
        Car(){
            cout << "Car Deault Constructor" << endl;
        }
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
        scooter()
        {
            cout << "Scooter Deault Constructor" << endl;
        }

        void inf()
        {
            cout << type << endl;
            cout << wheels << endl;
        }

};

int main(){
    scooter s1;
}