  #include<iostream>
  #include<vector>
  using namespace std;
  int main(){
    vector<vector<int> >arr; //gap should be there btw <int> and >
    vector<int>a{1,2,3};
    vector<int>b{2,4,6};
    vector<int>c{1,3,7};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for(int i=0; i<arr.size(); i++){
        for(int j=0;j<arr[0].size(); j++){  
            //arr[0].size() if Number of columns is same in all rows
            //arr[i].size() if Number of columns is not same in all rows
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
  }


 /* 
 int row=3,
 int col=5;
 vector<vector<int> >arr(row,vector<int>(col,0));

     o/p  00000
          00000
          00000

*/


   