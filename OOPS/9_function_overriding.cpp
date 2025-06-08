// Runtime polymorphism : method call is executed at runtime

#include<iostream>
using namespace std;

class Animal{
    public:
   virtual void speak(){
        cout<<"speaking"<<endl;
    }
};
class Dog: public Animal{
    public:
    // override 
   void speak(){
        cout<<"barking"<<endl;
    }
};

int main(){
    // Animal a; a.speak();
    // Dog d1;
    // d1.speak();


//   Animal* a = new Animal();
//   a->speak();
  
//   Dog* b = new Dog();
//   b->speak();

    // upcasting
    Animal* a = new Dog();
    a->speak();
    return 0;
}

// without virtual, 
