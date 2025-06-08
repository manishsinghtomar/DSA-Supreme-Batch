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
};

int main(){

    //Object Creation
    Animal ramesh(10, "kutta", 50); // parameterized constructor

    cout<< "Age of ramesh is: "<<ramesh.age <<endl;
    cout<< "name of ramesh is: "<<ramesh.type <<endl;  
    cout<< "Weight of ramesh is: "<<ramesh.getweight() <<endl;
  
    Animal *suresh = new Animal(); //default constructor
    cout<< "Age of suresh is: "<<suresh->age <<endl;
    cout<< "name of suresh is: "<<suresh->type <<endl;  
    cout<< "Weight of suresh is: "<<suresh->getweight() <<endl;
    
    //object copy
    Animal Manish = ramesh; 
    Animal kamlesh(*suresh); //alternate metnod to copy object
    Animal Ajay(Manish);
    cout<< "Weight of Manish is: "<<Manish.getweight()<<endl;
    cout<< "Weight of Kamlesh is: "<<kamlesh.getweight()<<endl;
    cout<< "Weight of Ajay is: "<<Ajay.getweight()<<endl;
    return 0;
}