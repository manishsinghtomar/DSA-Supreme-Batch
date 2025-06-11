// Runtime polymorphism : method call is executed at runtime

#include <iostream>
using namespace std;

class Animal
{
public:
    Animal()
    {
        cout << "i am inside animal constructor" << endl;
    }
    virtual void speak()
    {

        cout << "speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    Dog()
    {
        cout << "i am inside Dog constructor" << endl;
    }
    // override
    void speak()
    {
        cout << "barking" << endl;
    }
};

int main()
{
    //Animal* a = new Animal();    //  o/p - i am inside animal constructor

    //Animal* b = new Dog();       //   i am inside animal constructor
                                   //    i am inside Dog constructor
    
   // Dog* c = new Dog();         //    i am inside animal constructor
                                  //     i am inside Dog constructor
      
   Dog* d = (Dog*) new Animal();    // i am inside animal constructor
    return 0;
}

// without virtual keyword, if a base class pointer points to a derived class object, calling a function will invoke the base class version (early binding).

// with  virtual keyword , The function call is resolved at runtime, ensuring the derived class version is executed (late binding).

// without virtual, upcasting leads to early binding (calling base class methods instead of overridden derived class).

// shortnote: without virtual keyword - pointer type wise methods will be invoked
// shortnote: with virtual keyword - object type wise methods will be invoked