#include<iostream>
using namespace std;

class Student{
public:
    int age;
    int weight;
    int number;

    void print() const {
        cout << age << " " << weight << " " << number;
    }
};

// Overload << as a non-member function
ostream& operator<<(ostream& out, const Student& obj) {
    out << obj.age << " " << obj.weight << " " << obj.number;
    return out;
}

int main(){
    Student obj;
    obj.age = 20;
    obj.weight = 60;
    obj.number = 101;
    cout << obj;
    return 0;
}