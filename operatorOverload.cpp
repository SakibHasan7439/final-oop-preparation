#include <iostream>
using namespace std;

class MyClass {
    int value;

    public:
        MyClass() {
            value = 0;
        };

        MyClass(int v){
            value = v;
        };

        MyClass operator*(const MyClass& obj){
            return MyClass(this->value * obj.value);
        };

        MyClass operator-(const MyClass& obj){
            return MyClass(this->value - obj.value);
        }

        void display(){
            cout<<"Value is - "<<value<<endl;
        }
};

int main(){
   MyClass obj1(5), obj2(10), obj4(5), obj3(12), obj;
   obj = (obj1 * obj2 * obj4) - obj3;
   obj.display();
}