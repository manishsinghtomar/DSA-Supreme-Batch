// Reverse a String

#include<iostream>
#include<string.h>
using namespace std;

int reverseCharArray(char name[]){ //array pass by reference hota hai jo bhi changes honge wo main function me sustain krege
    int i = 0;
    int n = strlen(name);
    int j = n - 1;

    while(i<=j) {
        swap(name[i], name[j]);
        i++;
        j--;
    } 
}

int main(){
 char name[100];
  cin>> name;
  cout << "Initially: " << name << endl;
  reverseCharArray(name);
  cout << " After reversal process: " << name << endl;
    return 0;
}