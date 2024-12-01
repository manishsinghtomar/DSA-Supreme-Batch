#include<iostream>
#include<string.h>
using namespace std;

void covertIntoLowerCase(char arr[]){
    int n = strlen(arr);
    for(int i=0; i<n; i++){
        arr[i] = arr[i] - 'A' + 'a';    //UpperCase to Lowercase --> -'A' + 'a'    
    } 
}

int main(){
    char arr[50]= "MANISH";
    covertIntoLowerCase(arr);
    cout << arr << endl;
    return 0;
}