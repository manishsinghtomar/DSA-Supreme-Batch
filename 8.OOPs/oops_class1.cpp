/* padding refers to extra bytes added between data members of a class or structure to ensure proper memory alignment. This alignment allows the processor to access data more efficiently, as many processors are optimized to read data from memory at specific byte boundaries. */

/* Padding and Alignment: Compilers add padding between data members to align them on memory boundaries, enhancing access speed. 


Greedy Alignment Strategy: This technique aggressively arranges data members to reduce padding, often by ordering members from largest to smallest size */

#include<iostream>
using namespace std;

class Animal {
};

class Animal2{

    int age;
    int weight;
    char ch;

};

class Animal3{
//In C++, the default access modifier for class members is private

public:
// state or properties
    int age;
    string name;

    // default constructor
    Animal3(){
        age = 0;
        name = "";
        cout<<"Constructor is called"<<endl;
    }

    //behaviour    - behaviour means functions and we often call them methods in java
    void eat(){
    cout<<"Eating"<<endl;
    }

    void sleep(){
    cout<<"Sleeping"<<endl;
    }

};

int main(){
 cout<<"size of empty class: "<< sizeof(Animal) << endl; //empty class takes 1 byte memory
 cout<<"size of empty class: "<< sizeof(Animal2) << endl;// it takes 12 bytes bcoz of padding concept 

  //Object Creation

  //Static
  Animal3 ramesh;
  
  cout<< "Age of ramesh is: "<<ramesh.age <<endl;
  cout<< "name of ramesh is: "<<ramesh.name <<endl;


  // Dynamic Memory
  Animal3 *suresh = new Animal3;
  (*suresh).age = 35;
  (*suresh).name = "Suresh Kumar";

  // alternative - dynamic
    suresh->age = 34;
    suresh->name = "Suar";
    suresh->eat();
    suresh->sleep();
    cout<< "Age of suresh is: "<<suresh->age <<endl;
    cout<< "name of suresh is: "<<suresh->name <<endl; 

    return 0;
}