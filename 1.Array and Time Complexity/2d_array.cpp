#include<iostream>
using namespace std;

int main(){
    //declare 2D array
    int arr[3][3];

    //initialisation
    int brr[3][3] = {
        {1,2,3}, 
        {4,5,6}, 
        {2,4,8}};//3x3

//row-wise print
cout << "printing row Wise"<< endl <<endl;
//outer loop
for(int i=0; i<3; i++) {
    //for every row, we need to print value in each column 
    for(int j=0;j<3;j++){
        cout<<brr[i][j]<< " ";
    }
    cout<< endl;
}
    
cout << "printing Column Wise"<< endl <<endl;
//column print 
for(int i=0; i<3; i++) {
    //for every column, we need to print value in each row 
    for(int j=0;j<3;j++){
        cout<<brr[j][i]<< " ";
    }
    cout<< endl;
}

    return 0;
}
