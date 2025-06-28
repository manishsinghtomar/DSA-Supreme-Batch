#if !defined(BIRD_H) // this line ensure that header file should be included only one time.

#define BIRD_H
#include<iostream>

// interface
class Bird{
    public:
    virtual void eat() = 0;
    virtual void fly() = 0;
    // classes that inherits this class
    // has to implement pure virtual fns.
};

// implementation
class sparrow: public Bird
{
    private: 
    void eat(){
        std::cout << "Sparrow is eating\n";
    }
    void fly(){
        std::cout<<"Sparrow is flying\n";
    }
}; 

class eagle : public Bird
{
private: 
     void eat()
     {
        std::cout << "Eagle is eating\n";
     }
     void fly()
     {
        std::cout<<"Eagle is flying\n";
     }
};

#endif // BIRD_H