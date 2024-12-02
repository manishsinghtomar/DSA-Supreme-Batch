#include<iostream>
#include<string>
using namespace std;

bool CompareString(string a, string b){
 if(a.length()!=b.length())
    return false;
 for(int i=0; i<a.length();i++){
    if(a[i]!=b[i]){
     return false;
    }
 }
 return true;
}

int main(){
    string a = "Manish";
    string b = "manish";
    cout<<CompareString(a,b);
    return 0;
}