class Solution {
public:
    vector<int> twoPtrMethod(vector<int>& arr, int k, int x) {
        int l = 0, h = arr.size() - 1;
        while (h - l >=k) {
            if (x - arr[l] > arr[h] - x) {
                l++;
            } else {
                h--;
            }
        }
        // vector<int> ans;
        // for(int i= l ; i<=h; i++){
        //     ans.push_back(a[i]);
        // }
        // return ans;
        return vector<int>(arr.begin() + l, arr.begin()+h+1);  //it ignores last index
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        return twoPtrMethod(arr, k, x);
    }
};
