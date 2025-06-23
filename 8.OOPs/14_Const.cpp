#include <iostream>
using namespace std;

class abc
{
//private members
mutable int x;   // mutable keyword allows us to modify value in const marked method.
int *y;
int z;


public:
    abc()
    {
        x = 0;
        y = new int(0);
    }
    
    // abc(int _x, int _y){
    //     x= _x;
    //     *y = _y;
    // }
    

    // ctor : old style
    // abc(int _x, int _y, int _z =0){ // default Argument : if we dont pass value of _z then by default value will be passed;
    //     x= _x;
    //     *y = _y;
    //     z= _z;
    // }

    // initialization list
    abc(int _x, int _y, int _z = 0) : x(_x), y(new int(_y)), z(_z) {}

    // int getX() const
    // {
    //     x=34; // this method is const and can't ever change member variable
    //     return x;
    // } 
    
    int getX() const 
    {
        x = 12 ; // no error , cause mutable keyword
        return x;
    }

    void setX(int _val)
    {
        x = _val;
    } 
    
    int getY() const
    {
        int f = 34;
        // y = &f; // error cant be modified or change cause method is const
        return *y;
    }

    void setY(int _val)
    {
        *y = _val;
    }

    int getZ() const
    {
        return z;
    }
};

// here , 'a' cant call a non const function.
void printABC(const abc &a){  // for const parameter , invoking function should be const otherwise it will throw error. 
   cout << a.getX()<<" "<< a.getY() <<"  "<<a.getZ()<<endl;
}

int main()
{
    // abc a; 
    // cout<<a.getX()<<endl; //0
    // cout<<a.getY()<<endl; //0
    
    abc b(1,2);
    printABC(b);
    return 0;
}

int main2()
{
    // const int x = 5; // x is constant.
    // instialization can be done.
    // but we cant reassign a value.
    // x=10;
    // cout << x <<endl;

    // 2. const with pointers
    // const int *a = new int(2); // CONST data, NON-CONST pointer.
    // int const *a = new int(); // same as line no.13.
    // cout << *a << endl;
    // *a = 20; cant change the content of pointer.
    // cout << *a << endl;
    // int b = 20;
    // a = &b; // pointer itself can be reassigned.
    // cout << *a << endl;

    // CONST Pointer, but NON-CONST data.
    // int *const a = new int(2);
    // cout << *a << endl;
    // *a = 20; // chal jayega
    // cout << *a << endl;
    // int b = 50;
    // a = &b; // nahi chalega, CONST pointer.

    // CONST pointer, CONST data
    // const int *const a = new int(10);
    // cout << *a << endl;
    // *a = 50;
    // int b = 100;
    // a = &b;

    return 0;
}


// default arguments are always right most ;
// int(int x =2 , int y , int z =4 , int u = 5){} //not allowed all should be at the right most position.