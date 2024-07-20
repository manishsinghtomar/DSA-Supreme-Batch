#include<iostream>
#include<vector>
using namespace std;


vector<int> Find_intersection(vector<int> arr1, vector<int> arr2){
    vector <int> ans;
    for(int i=0;i<arr1.size();i++){
        for(int j=0;j<arr2.size();j++){
            if(arr1[i]==arr2[j]){
                //Mark (for removing duplicate elements)
                arr2[j]=-1;
                ans.push_back(arr2[j]);
            }
        }

    }
    return ans;
}

int main(){
int size1,size2;
cout<<"enter the size of first array:";
cin>>size1;
vector<int> arr(size1);
//taking input 
cout<<"enter the values of first array:";
for(int i=0;i<arr.size();i++){
    cin>>arr[i];
}

//taking input
cout<<"enter the size of second array:";
cin>>size2;
vector<int> brr(size2);
cout<<"enter the values of second array:";
for(int i=0;i<brr.size();i++){
    cin>>brr[i];
}

cout<<"first array = ";
//print the first array
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}cout<<endl;

cout<<"second array = ";
//print the second array
for(int i=0;i<brr.size();i++){
    cout<<brr[i]<<" ";
}cout<<endl;
vector<int> answer;
answer= Find_intersection(arr,brr);

cout<<"intersection of given array: ";
for(int i=0;i<answer.size();i++){
    cout<<answer[i]<<" ";
}cout<<endl;

    return 0;
}