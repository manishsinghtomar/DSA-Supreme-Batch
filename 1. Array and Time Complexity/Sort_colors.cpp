class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros=0, ones=0, twos=0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) zeros++;
            else if (nums[i] == 1) ones++;
            else if(nums[i] == 2) twos++;
        }
        cout<<zeros<<endl;
        cout<<ones<<endl;
        cout<<twos<<endl;
        vector<int>sorted;
        for (int i = zeros;i>0; i--) {
            sorted.push_back(0);
        }
        for(int i = ones ;i>0; i--) {
            sorted.push_back(1);
            }
        for(int i = twos; i>0; i--) {
           sorted.push_back(2);
        }
        for(int i=0 ;i<nums.size(); i++){
            nums[i] = sorted[i];
        }
    }
};