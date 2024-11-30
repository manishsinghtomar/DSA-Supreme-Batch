#include<iostream>
#include<string.h>
using namespace std;

void replaceSpace(char sentence[]){
    int i=0;
    int n = strlen(sentence);
    for(int i=0; i<n ; i++){
        if(sentence[i] == ' '){
            sentence[i] = '@';
        }
    }
}

int main(){
    char name[100];
    cin.getline(name,50);
    replaceSpace(name);
    cout<<name<<endl;
    return 0;
}