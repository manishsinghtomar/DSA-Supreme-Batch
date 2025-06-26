// Static data members of class are not related to a instance of class. they share memory with all the class instances.

#include<iostream>
using namespace std;
class abc
{
    public:
    // static int x, y;
    int x, y;

    abc() : x(0), y(0) {}

    static void print() 
    {
        // no this pointer accessible.
       printf("I am in Static %s\n", __FUNCTION__);
    }
    // void print() const 
    // {
    //     cout << x << " " << y << endl;
    // }
};

// int abc::x; //static data members declaration
// int abc::y;

int main()
{
    abc obj1;
    // obj1.x = 1;
    // obj1.y = 2;
    obj1.print();  
    // abc::x = 1; //use
    // abc::y = 2;
    abc::print(); 
    
    abc obj2;
    // obj2.x = 10;
    // obj2.y = 20;
    // obj1.print();  //10 20
    // obj2.print();  //10 20
    return 0;
}
