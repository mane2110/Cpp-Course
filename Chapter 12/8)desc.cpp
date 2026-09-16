#include <iostream>
using namespace std;

class country{
    public: 
        country(){
            cout << "Default country constructor" << endl;
        }
        country(string name_para,int size_para) : name(name_para) , size(size_para)
        {
            cout << "Custom country constructor" << endl;
        }
        ~country(){
            cout << "Destructor for country" << endl;
        }

        void info()
        {
            cout << name << endl;
            cout << size << endl;
        }

        private:
            int size;
            string name;
};

class state : public country{
    public : 
        state(){
            cout << "Default state constructor" << endl;
        }
        state(string name,int size,string sname_para, string direction_para) : 
        country(name,size),sname(sname_para),direction(direction_para) {
            cout << "Custom state constructor" << endl;
        }
        ~state(){
            cout << "Destructor for state" << endl;
        }

    void info()
        {
            cout << sname << endl;
            cout << direction << endl;
        }
    
    private :
        string sname;
        string direction;
};

class city : public state{
    public :
        city(){
            cout << "Default city constructor" << endl;
        }
        city(string name,int size,string sname, string direction,string cname_para,int code_para) : 
        state(name,size,sname,direction) , cname(cname_para) , code(code_para){         //intialiser list
            cout << "Custom city constructor" << endl;
        }
        ~city(){
            cout << "Destructor for city" << endl;
        }
    
    void info()
    {
        cout << cname << endl;
        cout << code << endl;
    }

    private :
        string cname="Mumbai";
        int code;
};

int main(){
    city c1("India",5000,"Maharastra","West","Pune",411);
}
