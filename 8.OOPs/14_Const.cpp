#include <iostream>
using namespace std;

class abc
{
    int x;
    int *y;

public:
    abc()
    {
        x = 0;
        y = new int(0);
    }

    int getX()
    {
        return x;
    }

    void setX(int _val)
    {
        x = _val;
    }
};

int main()
{

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