// 5! -> 120 use can store this in int but we can't store the factorial of large no. in integer bcoz out of range issue. 
// signed int range ---> -2^31 to 2^31-1
// unsigned int range ---> 2^32 = approx 4gb

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        vector<int>ans;
        ans.push_back(1);
        int carry=0;
        for(int i=2;i<=N;i++){
            for(int j=0;j<ans.size();j++){
            int x = ans[j]*i+carry;
             ans[j]= x%10;
             carry= x/10;
        }
    while(carry){
        ans.push_back(carry%10);
        carry/=10;
     }
   }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends