#include<iostream>
using namespace std;

class Animal{
//In C++, the default access modifier for class members is private
private:
  int weight;

public:
// state or properties;
    int age;
    string type;

    // copy constructor
    Animal(Animal &obj){ //by reference
        this->age = obj.age;
        this->type = obj.type;
        this->weight = obj.weight;
        cout<<"I'm inside Copy Constructor "<<endl;
    }

    // default constructor or no argument constructor or no parametrized constructor
    Animal(){
        this->weight = 0;
        this->age = 0;
        this->type = "";
        cout<<"Constructor is called"<<endl;
    }

    // parameterized constructor
    Animal(int age, string type, int weight){
        this->age = age;
        this->type = type;
        this->weight = weight;
        cout<<"Parameterized Constructor is called"<<endl;
    }

    //behaviour    - behaviour means functions and we often call them methods in java
    void eat(){
    cout<<"Eating"<<endl;
    }

    void sleep(){
    cout<<"Sleeping"<<endl;
    }
    
    int getweight(){
    return weight;
    }

    void print(){
        cout<<"Age: "<<this->age<<endl;
        cout<<"Type: "<<this->type<<endl;
        cout<<"Weight: "<<this->weight<<endl;
    }

    ~Animal(){
        cout<<"I am inside Destructor"<<endl;
    } 


};

int main(){
    cout << "a obj creation" << endl;
    Animal a;
    a.age = 5;

    cout << "b obj creation" << endl;
    Animal *b = new Animal;
    b->age = 12;

    //manually 
    delete b;

    return 0;
}