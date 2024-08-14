//  FROM WEBSITE " CSES "
// REMOVING DIGITS

#include<bits/stdc++.h>
using namespace std;

vector<int> dp;

vector<int> digits(int n){
    vector<int> nums;
    while(n>0){
        if(n%10 != 0){
            nums.push_back(n%10);
        }
        n/=10;
    }
    return nums;
}

int f(int n){
    if(n==0){
        return 0;
    }
    if(n<= 9){
        return 1;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    vector<int> arr = digits(n);
    int result = INT_MAX;
    for(int i=0;i<arr.size();i++){
        result = min(result, f(n-arr[i]));
    }
    return dp[n] = 1 + result;
}

int main(){
    int n;
    cin>>n;
    dp.clear();
    dp.resize(1000005,-1);
    cout<<f(n)<<endl;
    return 0;
}