#include <iostream>
using namespace std;

class abc
{
//private members
mutable int x;   // mutable keyword allows us to modify value in const marked method.
int *y;
const int z;


public:
   

    // ctor : old style
    // abc(int _x, int _y, int _z =0){ // default Argument : if we dont pass value of _z then by default value will be passed;
    //     x= _x;
    //     *y = _y;
    //     z= _z; // it will throw an error for re-assign the value of z 
    // }

    // initialization list
    // abc(int _x, int _y, int _z = 0) : x(_x), y(new int(_y)), z(_z) {}// but it will not throw an error for reassign
    abc(int _x, int _y, int _z = 0) : x(_x), y(new int(_y)), z(_z) 
    {
       cout << "in init list" << endl;
       *y = *y * 10;
    //    z = 45;  // cant re-assign again cause it's an const variable 
    }

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
    abc b(1,2 ,5);
    printABC(b);
    return 0;
}
