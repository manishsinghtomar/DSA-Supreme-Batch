//{ Driver Code Starts
// C++ program to find union of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
 string calc_Sum(vector<int>& a, vector<int>& b) {
        int carry = 0;
        string ans;
        int i=a.size()-1;
        int j=b.size()-1;
        
        while(i>=0 && j>=0){
            int x=a[i]+b[j]+carry;
            int digit = x%10;
            ans.push_back(digit +'0');//typecasting int to character;
            carry = x/10;
            i--,j--;
        }
         while(i>=0){
            int x=a[i] + 0 + carry;
            int digit = x%10;
            ans.push_back(digit +'0');//typecasting int to character;
            carry = x/10;
            i--;
        }
         while(j>=0){
            int x= 0 + b[j] + carry;
            int digit = x%10;
            ans.push_back(digit +'0');//typecasting int to character;
            carry = x/10;
            j--;
        }
        if(carry){
            ans.push_back(carry + '0'); // adding carry at the starting of main answer 
        }
        
        while(ans[ans.size()-1]=='0'){ // pop all zeros present at the starting of main answer
            ans.pop_back();
        }
        reverse(ans.begin(),ans.end());// reverse the array
        return ans;
    }
};

//{ Driver Code Starts.
/* Driver program to test above function */
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {

        vector<int> arr1, arr2;
        string input1;
        getline(cin, input1);
        stringstream ss(input1);
        int number1;
        while (ss >> number1) {
            arr1.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream sss(input2);
        int number2;
        while (sss >> number2) {
            arr2.push_back(number2);
        }
        Solution ob;
        // Function calling
        // vector<int> v;
        string v = ob.calc_Sum(arr1, arr2);

        // for (int i = 0; i < v.size(); i++)
        //     cout << v[i] << " ";

        // cout << endl;
        cout << v << endl;
        // cout << "~" << endl;
        // string tilde;
        // getline(cin, tilde);
    }

    return 0;
}

// } Driver Code Ends