#include<iostream>
#include<limits.h>
using namespace std;
int getMax(int arr[][3], int rows, int cols){
    int maxi= INT_MIN;
    for (int i=0; i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]>maxi){
                maxi=arr[i][j];
            }
        }
    }
    return maxi;
}
int getMin(int arr[][3], int rows, int cols){
    int mini= INT_MAX;
    for (int i=0; i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]<mini){
                mini=arr[i][j];
            }
        }
    }
    return mini;
}


int main(){

int arr[3][3];
int rows =3;
int cols =3;

  //input

  //row wise input   
for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cin>>arr[i][j];
    }
} 


cout << "printing col-Wise"<< endl;
    //outer loop
for(int i=0; i<3; i++) {
    //for every row, we need to print value in each column 
    for(int j=0;j<3;j++){
        cout<<arr[j][i]<< " ";
    }
    cout<< endl;
}
cout <<"Max Number: "<<getMax(arr,rows,cols)<<endl; 
cout <<"Min Number: "<<getMin(arr,rows,cols)<<endl; 
     return 0; 
}