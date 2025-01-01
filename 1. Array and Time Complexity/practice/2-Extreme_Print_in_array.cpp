#include<iostream>
#include<limits.h>
using namespace std;
int main(){   
    int arr[]={1,0,9,8,7,5,4,43};
    int size = 8;

    //code for finding minimun number
    int mini =INT_MAX; // maximum possibe interger value 
    for(int i=0;i<size;i++){
    if (arr[i]<mini){
        mini = arr[i]; 
    }
    }
    cout <<"The Minimum number:"<<mini<<endl
    
    
    
    ;



    // code for Extreme print 
    cout<<"Extreme Print in array:";
    for(int i=0;i<(size)/2;i++){
        cout<<arr[i]<<arr[size-(i+1)];
    }
    return 0;
}