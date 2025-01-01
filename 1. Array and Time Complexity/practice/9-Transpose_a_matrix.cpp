#include<iostream>
using namespace std;
void Transpose(int arr[][3], int rows, int cols, int transposeArr[][3]){
    for( int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
        // swap(arr[j][i],arr[i][j]); it will not work we need to create an another array to transpose
        transposeArr[j][i]=arr[i][j];
      }
    }
    cout<<"transposed matrix"<<endl;
  }

  //print 
void PrintArray(int arr[][3] ,int rows, int cols){
for(int i=0;i<rows;i++){
    for(int j=0; j<cols;j++){
        cout<<arr[i][j]<<" ";
       }
       cout<<endl;
    }
}

int main(){
  int arr[3][3];
  int rows=3;
  int cols=3;
  //input
for(int i=0;i<rows;i++){
    for(int j=0; j<cols;j++){
        cin>>arr[i][j];
       }
  }

cout<<"Printing Array"<<endl;
PrintArray(arr,rows,cols);
cout<<"Starting Transpose"<<endl;
int transpose[3][3];
Transpose(arr,rows,cols,transpose);
cout<<"Printing Array Again"<<endl;
PrintArray(transpose, rows, cols);
  return 0;
}