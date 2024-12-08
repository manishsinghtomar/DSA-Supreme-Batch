#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(char first, char second){
    return first>second;
}

bool compare(int a,  int b){
    return a > b; 
}

int main(){
    string s = "manish";
    sort(s.begin(), s.end(), cmp); //lexicographical order (alphabetical order)

    vector<int> v{5,4,2,3,1};
    sort(v.begin(),v.end(), compare);
    for(auto i:v){
        cout<< i <<" ";
    }

    cout<< s << endl;
    return 0;
}