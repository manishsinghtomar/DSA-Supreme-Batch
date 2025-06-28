#include<iostream>
#include "bird.h"
using namespace std;

void birddoesSomething(Bird *&bird)
{
    bird->eat();
    bird->fly();
    bird->eat();
}

int main()
{
    Bird *bird = new sparrow();
    Bird *mybird = new eagle();

    // sparrow *sp = new sparrow(); //it's inaccessible it wont work
    // sp->eat();

    birddoesSomething(bird);
    birddoesSomething(mybird);
    return 0;
}