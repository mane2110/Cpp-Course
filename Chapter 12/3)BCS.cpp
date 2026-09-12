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

    protected :
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

        void info(){
            cout << name << endl;
            cout << type << endl;
            cout << wheels << endl;
            cout << color << endl;
        }

    private :
        string color;
        string name;
};

class scooter : public Car{
    void inf()
    {
        //cout << type;
        //cout << wheels ;
    }
};

int main(){
    Vehicle v1;
    Car c1("Red","Mobilio");
    c1.info();
    //cout << c1.type << endl;

}