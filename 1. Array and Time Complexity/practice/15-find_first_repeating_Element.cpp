class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(vector<int> &arr) {
        // for(int i=0; i<arr.size() ; i++){
        //     bool isRepeated = false;
        //     for(int j= i+1;j<arr.size();j++){
        //         if(a[i]==a[j]){
        //             isRepeated=true;
        //             return i+1;
        //         }
        //     }
        //     return -1;
        // }
    
    unordered_map<int , int>hash;
    for(int i=0; i<arr.size();i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<arr.size();i++){
        if(hash[arr[i]]>1){
            return i+1;
        }
    }
    return -1;
    }
};