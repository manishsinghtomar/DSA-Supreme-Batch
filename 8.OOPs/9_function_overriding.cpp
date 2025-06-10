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
    // Animal a; a.speak();                         O/p: speaking
    
    // Dog d1;                                      O/p: barking 
    // d1.speak();


//   Animal* a = new Animal();                      O/p: speaking
//   a->speak();
  
//   Dog* b = new Dog();                            O/p: barking   
//   b->speak();

    // upcasting - Derived object assigned to Base pointer 
    Animal* a = new Dog();
    a->speak();

    Dog* b = (Dog*)new Animal();
<<<<<<< HEAD
    b-> speak();
=======
    b->speak();

    delete a; // clean up memory
>>>>>>> 6532322113007152e7f04e0aaae6e80a84e395dc
    return 0;
}

// without virtual keyword, if a base class pointer points to a derived class object, calling a function will invoke the base class version (early binding).

// with  virtual keyword , The function call is resolved at runtime, ensuring the derived class version is executed (late binding). 

// without virtual, upcasting leads to early binding (calling base class methods instead of overridden derived class).

// shortnote: without virtual keyword - pointer type wise methods will be invoked
// shortnote: with virtual keyword - object type wise methods will be invoked