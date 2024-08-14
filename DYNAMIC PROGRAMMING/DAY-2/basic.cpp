   
// Fibonacci Series using Recursion 
#include <bits/stdc++.h> 
using namespace std; 
vector<int> dp;
int fib(int n) 
{ 
    if (n <= 1) 
        return n; 
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n] = fib(n - 1) + fib(n - 2); 
} 
  
int main() 
{ 
    

    int n = 9; 
    dp.resize(10000007,-1);
    cout << fib(n); 
    return 0; 
} 