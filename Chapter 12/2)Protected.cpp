#include<iostream>
using namespace std;

class Vehicle{
    public :
        Vehicle() = default;
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
        Car() = default;
        Car(string color_param,string name_param){
            color=color_param;
            name = name_param;
            //type="Car";
            //wheels=4;
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

int main(){
    Vehicle v1;
    Car c1("Red","Mobilio");
    c1.info();

}