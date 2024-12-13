#include<bits/stdc++.h>
using namespace std;


void solve(int n){
    if(n==0){
        return;
    }
    cout<<n%10<<" ";

    solve(n/10);
}   

int main(){
    int n = 11234234;
    solve(n);
    return 0;
}