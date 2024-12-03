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


    //_____substring____
    cout<<str.substr(0,6)<<endl; //[0,6) 0 se start 6 length ka string
    
    cout<<str<<endl;
    
    // <--compare function-->
    string a = "love";
    string b = "lover";

    if(a.compare(b)==0){
        cout<< " a and b are exactly same strings" << endl; //0---> means both strings are same 
    }
    else{
        cout<< " a and b are not same" << endl;            //1--> means both strings are not same.
    }

  //<--String::find--> 
  string sentence = "hello jee kaise ho saare"; //find returns 0 if target hits otherwise it return garbage value. we can use npos (non-position) in conditional statements.
  string target = "hello";

  cout<<sentence.find(target)<<endl;

  string target2 = "everyone";
  cout<<sentence.find(target2)<<endl;

if(sentence.find(target2)==string::npos){  //std::string::npos =-1 
   cout<<"Not found"<<endl; 
}

//<---string::replace--->

   string line = "this is my first Message";

   line.replace(11,5,"Second"); //(starting index, size of string want to remove,new string) 
   cout<<line<<endl;

// string:: erase

string word = "this is an example sentence";
word.erase(11,8);
cout<<word;
    return 0;
}