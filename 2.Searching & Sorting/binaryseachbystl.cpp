#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// int binarySearch(int arr[], int size, int target){
//    int start = 0;
//    int end = size-1;
//    int mid = start +(end-start)/2;  //int mid = (start + end)/2; bcoz of integer overflow  
//    while(start<=end){
//     int element = arr[mid];

//     if(element == target){ //element found, then return index
//         return mid;
//     }
//     else if(target < element ){
//      //search in left 
//         end = mid - 1;
//     }
//     else{
//       //search in right
//         start = mid + 1;
//     }
//     mid = start +(end-start)/2;  //mid = (start + end)/2; again we calculate mid for new values of start and end
//    }
//       //element not found
//     return -1; //invalid index
// }

int main(){
    // int arr[]={2,4,6,8,10,12,16};
    // int size=7;
    // int target=8;

    // int indexOftarget = binarySearch(arr,size,target);
    // if(indexOftarget == -1){
    //     cout<<"target not found"<<endl;
    // }
    // else{
    //     cout<<"target found at "<<indexOftarget<< " index "<<endl;
    // }

   vector<int> v{1,2,3,4,5,6};
   int arr[]={1,2,3,4,5,6,7};
   int size = 7;

// for vector
   if(binary_search(v.begin(), v.end(),3)){
    cout<<"Found" <<endl;
   }
   else{
    cout<<"Not Found. "<<endl;
   }
   
   // for array
   if(binary_search(arr,arr+size,8)){  //base address--> arr , last address--> arr+size;
    cout<<"Found" <<endl;
   }
   else{
    cout<<"Not Found. "<<endl;
   }

    return 0; 
}