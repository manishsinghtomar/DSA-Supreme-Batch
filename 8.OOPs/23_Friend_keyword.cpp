#include<iostream>
using namespace std;

class A{
    private:
    int x;

    public:
    A(int _val): x(_val){};

    int getX() const {return x;}
    void setX(int _val) { x= _val;}

    void print() const 
    {
        cout << x*10<< endl;
    }
    
    // friend class B; // friend class
    // friend void print(const A &); //friend function

};

class B{
    public:
    void print (const A &a)
    {
        // cout<< a.getX() << endl;
        // cout << a.x << endl;
        a.print();
    }
};

// void print( const A &a){
//     cout<< a.x*10 <<endl;
// }
 
int main(){
    A a(5);
    B b;
    b.print(a);
    // print(a);
    return 0;
}