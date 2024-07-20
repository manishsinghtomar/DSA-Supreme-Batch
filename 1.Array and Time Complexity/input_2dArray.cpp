#include<iostream>
using namespace std;
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
return 0;
}