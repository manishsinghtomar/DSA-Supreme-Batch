#include <iostream>
using namespace std;

class abc
{
public:
    int x;
    int *y;
    abc(int _x, int _y) : x(_x), y(new int(_y)) {}
    
    // default dumb copy constructor, it does SHALLOW COPY
    abc(const abc &obj){
        x = obj.x;
        y = obj.y;
    }

    // OUR SMART DEEP COPY
    // abc(const abc &obj){
    //     x = obj.x;
    //     y= new int(*obj.y);
    // }
    
    void print() const
    {
        printf("X:%d\npointer Y:%p\nContent of Y (*y):%d\n\n", x, y, *y);
    }


    //destructor
    ~abc()
    { 
        delete y;
    }
};

int main()
{  
    abc *a = new abc(4,8);
    abc b = *a;
    delete a;
    b.print();
    return 0;
}

// X:4
// pointer Y:010f1550
// Content of Y (*y):17791232
// we will get output with this error : malloc: Double free of object 010f1550


// no error in case of Deep copy