#include<iostream>
using namespace std;

int x =2; // GLOBAL VARIABLE

void fun()
{
    int x = 60;
    cout << x << endl;
    ::x = 40; //scope resolution operator or double colon for accessing global variable 
    cout << ::x << endl;
}


// {} ---> sloped / lifecycle 
int main()
{
    ::x = 4; // global x
    int x = 20; // local to main() fn.
    cout << x << endl; 

    cout << ::x << endl;  // accessing Global with ::

{
    int x = 50;
    cout << x << endl;
}
    fun();
    return 0;
}

// output : 20
//          4 
//          50
//          60
//          40 