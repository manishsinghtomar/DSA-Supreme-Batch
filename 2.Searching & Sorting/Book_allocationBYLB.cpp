// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template in C++

class Solution {
  public: 
  
  bool isPossibleSolution(int  A[], int N, int M, int sol){
       int pageSum = 0;
       int c = 1;
       for(int i=0;i<N;i++){
           if(A[i] > sol){
               return false;
           }
           if(pageSum + A[i] > sol){
               c++;
               pageSum = A[i];
               if(c > M){
                   return false;
               }
           }
           else{
               pageSum += A[i];
           }
       }
       return true;
   }
    // Function to find minimum number of pages.
    long long findPages(int N, int A[], int M) {
       if(M>N) return -1;
       
       int start = 0;
       int end = accumulate(A, A+N, 0); //accumulate (starting address,end address,initial sum ) to get sum
       int ans = -1;
       
       while(start <= end){
        int mid = (start + end) >> 1; //2*1
        if(isPossibleSolution(A, N, M, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
      }
     return ans;
   }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        int m;
        cin >> m;
        Solution ob;
        cout << ob.findPages(n, A, m) << endl;
    }
    return 0;
}
