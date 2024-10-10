//K-diff Pairs in an Array
/*Given an array of integers nums and an integer k, return the number of unique k-diff pairs in the array.

A k-diff pair is an integer pair (nums[i], nums[j]), where the following are true:

0 <= i, j < nums.length
i != j
|nums[i] - nums[j]| == k
Notice that |val| denotes the absolute value of val.

 

Example 1:

Input: nums = [3,1,4,1,5], k = 2
Output: 2
Explanation: There are two 2-diff pairs in the array, (1, 3) and (3, 5).
Although we have two 1s in the input, we should only return the number of unique pairs.
Example 2:

Input: nums = [1,2,3,4,5], k = 1
Output: 4
Explanation: There are four 1-diff pairs in the array, (1, 2), (2, 3), (3, 4) and (4, 5).
Example 3:

Input: nums = [1,3,1,5,4], k = 0
Output: 1
Explanation: There is one 0-diff pair in the array, (1, 1).*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int bs(vector<int>& nums, int start, int x) {
        int end = nums.size()-1;
        while(start <= end){
        int mid = start + (end - start)/2;
        if(nums[mid] == x){
          return mid;
        }
        else if (x > nums[mid]){
          start = mid+1;
        }
        else{ 
          end = mid-1;
        }
      }
        return -1;
    }

int findPairs(vector<int> &nums, int k){
  sort(nums.begin(), nums.end());
  set<pair<int,int>>ans;

  for(int i=0; i<nums.size(); i++){
     if(bs(nums,i+1,nums[i]+k) != -1){
      ans.insert({nums[i],nums[i]+k});
     }
  }
  return ans.size();
}

int main(){
    vector<int> a{3,1,4,1,5};
    int k = 2;
    int ans = findPairs(a,k);
    cout<<"Output: "<<ans<<endl;
    return 0;
}




//two pointer approach
/*
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
       sort(nums.begin(), nums.end());
       set <pair<int, int>> ans;
       int i=0,j=1;
       while(j< nums.size()){
        int diff = nums[j]-nums[i];
        if(diff == k){
            cout<<nums[i]<< " "<<nums[j]<<endl;
            ans.insert({nums[i], nums[j]});
            ++i,++j;
          }
          else if(diff > k ){
            i++;
          }
          else{
            j++;
          }
          if(i==j) j++;
       }
     return ans.size();
   }
};
*/
