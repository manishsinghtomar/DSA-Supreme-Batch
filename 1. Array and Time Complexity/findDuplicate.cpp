class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // sort(nums.begin(),nums.end());

        // for(int i=0;i<nums.size()-1;i++){
        //   if(nums[i]==nums[i+1]){
        //   return nums[i];
        //  }
        // }
        // return -1;

        // visted solution.
        //  int ans = -1;
        //  for(int i = 0; i<nums.size();i++){
        //      int index = abs(nums[i]);

        //   //  already visited?
        //     if(nums[index]<0){
        //         ans = index;
        //         break;
        //     }

        //     // visited mark
        //     nums[index] *= -1;
        // }
        // return ans;

        // Positioning method
        while (nums[0] != nums[nums[0]]) {
            swap(nums[0], nums[nums[0]]);
        }
        return nums[0];
    }
};