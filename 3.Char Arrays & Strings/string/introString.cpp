#include<iostream>
#include<string>
using namespace std;

int main(){
    //string create
    string str;

    //input
    getline(cin, str); //cin>> str;

    //print
    cout<< str;

    //length
    cout<<" length: "<< str.length() << endl;

    //isEmpty or not
    cout<<" isEmpty: " << str.empty() <<endl;

    //push_back
    str.push_back('1');
    cout<<str<<endl;

    //pop_back
    str.pop_back();
    cout<<str<<endl;


    //substring
    cout<<str.substr(0,6)<<endl; //[0,6) 0 se start 6 length ka string
    
    cout<<str<<endl;
    
    //compare function
    string a = "love";
    string b = "lover";

    if(a.compare(b)==0){
        cout<< " a and b are exactly same strings" << endl; //0---> means both strings are same 
    }
    else{
        cout<< " a and b are not same" << endl;            //1--> means both strings are not same.
    }

    return 0;
}