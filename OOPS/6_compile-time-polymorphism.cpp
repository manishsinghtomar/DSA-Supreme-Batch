// Compile time polymorphism--1. function overloading
                         //   2. Operator Overloading

// return type should be same for function overloading
// we can only change number of variable and type of variables for function overloading

#include <iostream>
using namespace std;

class Maths
{
public:
    int sum(int a, int b)
    {
        cout<<"I am in First Signature"<<endl;
        return a + b;
    }

    int sum(int a, int b, int c)
    {
        cout<<"I am in Second Signature"<<endl;
        return a + b + c;
    }

    // doule sum(int a, float b)  // return type should be same for function overloading 
    int sum(int a, float b)  
    {
        cout<<"I am in Third Signature"<<endl;
        return a + b;
    }
};

int main()
{
  Maths obj;
   cout<<obj.sum(4,5)<<endl;
   cout<<obj.sum(4,5,5)<<endl;
//    cout<<obj.sum(4,5.4)<<endl; // here 5.4 is treated as double 
   cout<<obj.sum(4,5.4f)<<endl; // here , 5.4f is treated as float
    return 0;
}

