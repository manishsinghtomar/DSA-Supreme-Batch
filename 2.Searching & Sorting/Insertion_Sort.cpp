#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{10,1,7,6,14,9};
    int n = arr.size();
    
    //insertion sort
    for(int round = 1; round < n; round++) {
        //Step 1 - fetch
        int val = arr[round];
        //Step2 Compare
        for(int j=round-1;j>=0; j--) {
            if(arr[j]>val){
                 //shift
                arr[j+1] = arr[j]; 
            }
            else{
                //rukna hai
            }
        }
    }



    return 0;
}