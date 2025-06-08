#include <iostream>
using namespace std;

class Animal {
    private:
    int age;
    int weight;
    
    public:
    void eat(){
            cout<<"Eating" << endl;
          }
        int getAge(){
            return this->age;
        }
        void setAge(int age){
            this->age = age; 
        }


};

int main() {
    cout<< "Hello World" << endl;
    Animal kutta;
    kutta.eat();
    cout<<"age of my kutta is "<<kutta.getAge();//garbage value
    kutta.setAge(0);
         return 0;
}
