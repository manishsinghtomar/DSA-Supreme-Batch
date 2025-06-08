// Operator Overloading 
// c++ allows you to specify more than one definition for an operator in the same scope, which is called operator overloading

#include<iostream>
using namespace std;
class Param{
       public:
       int val;
       void operator+(Param &object2){
        int value1 = this->val; //only val can be used but this-> val is good practice
        int value2 = object2.val;
        cout<<value2-value1;
       }
};
int main(){
    Param object1 , object2;
    object1.val = 7;
    object2.val = 4;
    object1 + object2;
    return 0;
}