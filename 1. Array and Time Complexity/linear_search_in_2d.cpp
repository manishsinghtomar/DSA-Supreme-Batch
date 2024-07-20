#include<iostream>
using namespace std;

bool findkey(int arr[][3], int rows, int cols, int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]==key)
            return true;
        }
    }
    // value is not present
    return false;
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

int key = 1;
//cout<<findkey(arr,rows,cols,key); ---. 1 or 0
if(findkey(arr,3,3,key)){
    cout<<"true "<<endl;
}
else{
    cout<<"false"<<endl;
}
     return 0; 
}