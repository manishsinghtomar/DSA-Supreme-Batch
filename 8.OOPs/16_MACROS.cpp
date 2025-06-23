#include <iostream>
using namespace std;

#define PI 3.14 // it is not taking space in memory
#define MAXX(x,y) (x > y ? x : y)

float circleArea(float r){
    return PI*r*r;
}

float circlePerimeter(float r){
    return 2 * PI * r;
}

void fun(){
    int x = 6;
    int b = 17;
    int c = MAXX(x,b); 
    cout<<c<<endl;
}

int main(){
    cout << circleArea(65.4) << endl;
    fun();
    return 0;
}