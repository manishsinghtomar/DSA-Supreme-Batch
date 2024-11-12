#include<iostream>
#include <vector>
using namespace std;

long long int maxSawbladeHeight( vector<long long int> trees, long long int m){
    long long int start, end;
    end = *max_element(trees.begin(), trees.end()); //shortcut to find max element in array using stl
    while(start<=end){
        long long int mid = start + (end - start)/2;
        if(isPossibleSolution(trees,m, mid)) {
            ans=mid;
            start = mid +1 ;
        }
    }
}

int main(){
    long long int n , m;
    cin >> n >> m;
    vector<<long long int > trees;
    while(n--){
        long long int height;
        cin >> height;
        trees.push_back(height);
    } 

cout << maxSawBladeHeight(trees, m) << endl;

    return 0;
}
