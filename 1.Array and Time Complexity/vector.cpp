#include<iostream>
#include<vector>
using namespace std;

int main() {
    
    //create vector
    vector<int> arr;

    int ans = (sizeof(arr)/sizeof(int));
    cout << ans << endl;
    cout<< arr.size()<<endl;
    cout<< arr.capacity()<<endl;

    //insert 
    arr.push_back(5);
    arr.push_back(6);

    //print
    for(int i=0; i< arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //remove / delete
    arr.pop_back();

    //print
    for(int i=0; i< arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    // vector<int> brr(10); //it will be initialized by 0
    // vector<int> brr(10,-101); // it will be initialized by -101 
    int n; 
    cout <<"Enter the value of n"<<endl;
    cin>>n; 
    vector<int> brr(n, -101);// we can decide the size of vector at runtime. 
    cout<< "Size of b:" <<brr.size() <<endl;
    cout<< "Capacity of b:" <<brr.capacity() <<endl;

   //print
    for(int i=0; i< brr.size();i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;

    cout <<"Printing crr"<<endl;
    vector<int> crr{10,20,30,40};// crr will be initialized by individual values like 10,20,30 ,40

    for(int i=0; i<crr.size();i++){
        cout<< crr[i]<<" ";
    }
    cout<<endl;

    cout <<"Vector crr is Empty or not "<<crr.empty()<<endl;

    vector<int> drr;
    cout << "vector drr is empty or not "<<drr.empty()<<endl;//1 means true and 0 means false
 
    return 0;
}