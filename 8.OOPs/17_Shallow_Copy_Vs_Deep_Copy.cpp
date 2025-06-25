#include <iostream>
using namespace std;

class abc
{
public:
    int x;
    int *y;
    abc(int _x, int _y) : x(_x), y(new int(_y)) {}
    
    // default dumb copy constructor, it does SHALLOW COPY
    // abc(const abc &obj){
    //     x = obj.x;
    //     y = obj.y;
    // }

    // OUR SMART DEEP COPY
    // abc(const abc &obj){
    //     x = obj.x;
    //     y= new int(*obj.y);
    // }
    
    void print() const
    {
        printf("X:%d\npointer Y:%p\nContent of Y (*y):%d\n\n", x, y, *y);
    }

    ~abc(){
        delete y;
    }
};

int main()
{
    abc a(1, 2);
    cout<< "Printing a\n";
    a.print();

    // abc b(a);
    abc b = a; // call hota hai, COPY CONSTRUCTOR
    cout<< "Printing b\n";
    b.print();
    *b.y = 20;
    cout<<"Printint b\n";
    b.print(); //20
    
    cout<< "Printing a\n";
    a.print(); //20 here both objects are sharing same memory location
    return 0;
}