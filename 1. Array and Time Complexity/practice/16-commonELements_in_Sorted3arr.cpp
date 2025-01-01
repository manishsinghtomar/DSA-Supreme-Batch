#include<iostream>
#include<vector>
#include<set>
using namespace std;

// Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
                                   
     vector<int>ans;
     set<int>st;
     int i,j,k;
     i=j=k=0;
     while(i<arr1.size()  && j<arr2.size() && k<arr3.size()){
         if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
             st.insert(arr1[i]);
             i++,j++,k++;
         }
         else if(arr1[i]<arr2[j]){
             i++;
         }
         else if(arr2[j]<arr3[k]){
             j++;
         }
         else{
             k++;
         }
     }
     for(auto i : st){
         ans.push_back(i);
     }
     return ans;
    }

   int main(){
    vector<int> a{1,2,4,5};
    vector<int> b{0,3,5,8};
    vector<int> c{5,6,7,8};
    vector<int> ans = commonElements(a,b,c);
    for(int i : ans){
        cout<<i<<" ";
    }
    return 0;
       }