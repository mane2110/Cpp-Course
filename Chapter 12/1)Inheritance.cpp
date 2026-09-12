#include<iostream>
using namespace std;

class Vehicle{
    public :
        Vehicle() = default;
        Vehicle(string type_param , int wheels_param){
            type=type_param;
            wheels=wheels_param;
        }

        void set_type(string t){
            type=t;
        }

        void set_wheel(int w){
            wheels=w;
        }

        string get_type()
        {
            return type;
        }

        int get_wheel()
        {
            return wheels;
        }

    private :
        string type= "None";
        int wheels = 0;
        
};

class Car : public Vehicle{
    public : 
        Car() = default;
        Car(string color_param,string name_param){
            color=color_param;
            name = name_param;
            set_type("Car");
            set_wheel(4);
        }

        void info(){
            cout << name << endl;
            cout << get_type() << endl;
            cout << get_wheel() << endl;
            cout << color << endl;
        }

    private :
        string color;
        string name;
};

int main(){
    Car c1("Red","Mobilio");
    c1.info();
}