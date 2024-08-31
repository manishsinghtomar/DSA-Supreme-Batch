#include<iostream>
#include<vector>
using namespace std;

int solve(int dividend , int divisor){
    int s = 0;
    int e = abs(dividend);
    int ans = 0;
    
    int mid = s + (e-s)/2;
    while(s<=e){
        //perfect solution
        if(abs(mid*divisor) == abs(dividend)) {
            return mid;
        }
        //not perfect solution
        if(abs(mid*divisor) > abs(dividend)){
          //left
          e = mid-1;
        }
        else{
            //ans store
            ans = mid;
            //right search
            s = mid+1;
        } 
        mid = s + (e-s)/2;
    } 

    if ((divisor<0 && dividend<0)|| (divisor>0 && dividend>0 ))
        return ans;
    else {
        return -ans;
    }
   }
 
int main(){
    int dividend = 22;
    int divisor = -7;

    int ans = solve(dividend, divisor);
    cout<< "Ans is " << ans << endl;

    int precision;
    cout<< "Enter the number of floating digits in precision" <<endl;
    cin >> precision;

    double step =0.1;
    double finalAns = abs((double)ans);
    for(int i=0; i<precision; i++){
        for(double j=finalAns; j*abs(divisor)<=abs(dividend); j=j+step){
            finalAns = j;
        }
        step = step/10;
    }
    if ((divisor<0 && dividend<0)|| (divisor>0 && dividend>0 ))
        cout<<"Final ans is: "<<finalAns << endl;
    else {
        cout<<"Final ans is: "<<-finalAns << endl;;
    }
    return 0;
}

