// Function overloading with runtime polymorphism
#include <iostream>
using namespace std;

class Animal {
    public :
        virtual void speak(){
            cout <<"Animal speaks.";
        };
};

class Dog: public Animal {
    public:
        void speak() override {
            cout <<"Dog Barks!"<<endl;
        }
};

class Company {
    public:
        virtual void calSalary(){

        };
};

class Faq: public Company {
    public:
        void calSalary(){
            int working_hour = 5;
            cout<<"Total salary based on working hour: "<< working_hour * 1000<<endl;
        };
};

class Intellect: public Company {
    public:
        void calSalary(){
            int working_hour = 7;
            cout<<"Total salary in intellect based on working hour: "<< working_hour * 300<<endl;
        };
};

int main(){
    Dog d;
    d.speak();

    Company * p;
    Faq F;
    Intellect I;

    p =& F;
    F.calSalary();

    p =& I;
    I.calSalary();
};
