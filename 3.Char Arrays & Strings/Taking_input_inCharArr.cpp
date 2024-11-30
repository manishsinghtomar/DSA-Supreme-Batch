#include<iostream>
using namespace std;
int main(){
    char name[100];
    cin>>name;
    for(int i=0; i<7; i++){
        cout<<"index: " << i << " value: " << name[i] << endl; 
    }
    
    int value = (int)name[6];
    cout<< "value is " << value <<endl; //value is 0

    char arr[100];
    //cin >> arr;
    // getline(cin, arr);
    cin.getline(arr,50);
    cout<<arr;

    return 0;
}

/*

I/0: manish

O/p: index: 0 value: m
     index: 1 value: a
     index: 2 value: n
     index: 3 value: i
     index: 4 value: s
     index: 5 value: h
     index: 6 value:  

*/