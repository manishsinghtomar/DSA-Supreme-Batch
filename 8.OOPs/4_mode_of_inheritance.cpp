#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
};

class Dog : protected Animal
{ 
    public:
    void print(){
        cout<<this->age;
    }
};

int main()
{
    Dog d1;
    d1.print();
    return 0;
}

//output: garbage values