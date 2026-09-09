#include <iostream>
#include <string>

using namespace std;

class Dog{
    public: 

    Dog () = default;
    Dog(string name_param, string breed_param, int  age_param){
        name = name_param;
        breed = breed_param;
        p_age = new int;
        *p_age = age_param;
        std::cout << "Dog constructor called for " << name << " at " << this << std::endl;
    }

    ~Dog(){
        delete p_age;
        std::cout << "Dog destructor called for " << name << " at " << this <<  std::endl;
    }

    //setter

    Dog* setName(string name){
        this->name = name;
        return this;
    }

    Dog* setbreed(string breed){
        this->breed = breed;
        return this;
    }

    Dog* setage(int age)
    {
        *(this->p_age) = age;
        return this;
    }

    void print_info(){
            std::cout << "Dog (" << this << ") : [ name : " << name  << " breed : " << breed << " age : " << *p_age << "]" << std::endl;
        }

    private: 

        string name;
        string breed;
        int * p_age{nullptr};
};

int main()
{
    Dog d1("Bruso","Lab",15);
    d1.print_info();
    /*
    d1.setName("Bruno");
    d1.setage(5);
    */
   //Chained calls using pointers
    d1.setName("Pumba")->setbreed("Wire Fox Terrier")->setage(4);

    //Chained calls using references
    //dog1.set_dog_name("Pumba").set_dog_breed("Wire Fox Terrier").set_dog_age(4);


    d1.print_info();
    //Dog d2("Fanna","IDK",20);

}