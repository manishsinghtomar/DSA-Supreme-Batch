#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{10,1,7,6,14,9};

    int n = arr.size();
    //Bubble Sort
    for(int round = 1; round < n; round++){ //n-1 times
        int swapCount = 0; // bool swapped = false;
        for(int j=0; j< n-round; j++) {      //j-> 0 to n-round-1

            if(arr[j] > arr[j+1] ) {
                //  swapped = true;
                 swap(arr[j], arr[j+1]);
                 swapCount++;
            }
        }
        if (swapCount == 0){          // if(swapped == false){
          //sort ho chuka hai, no need to check in further rounds
          break;
        }
    }
    

    //printing
  for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  } 
  cout << endl;

    return 0;
    
  }
