#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
     vector<int> v{1,3,4,4,4,4,6,7};
    int target = 4;

    auto ans = lower_bound(v.begin(), v.end(), target); //first occurence of element
    cout<< "ans is "<< ans-v.begin() << endl;
    
    auto ans2 = upper_bound(v.begin(), v.end(), target); //last occurence of element
    cout<< "ans is "<< ans2-v.begin() << endl;

    return 0;
}



// lower_bound and upper_bound functions return the iterator that's why we are using auto keyword.