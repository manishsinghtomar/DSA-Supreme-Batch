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

    //behaviour    - behaviour means functions and we often call them methods in java
    void eat(){

    }

    void sleep(){

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
    return 0;
}