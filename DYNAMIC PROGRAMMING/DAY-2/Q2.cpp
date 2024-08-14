// Reduce a numsber n upto 1 
// Operations 
// 1> n --> n-1
// 2> if(n%2==0) --> n/2
// 3> if(n%3==0) --> n/3
// Return the minimum steps

#include<bits\stdc++.h>
using namespace std;

int f(int n){
    if(n==1){
        return 0;
    }
    if(n==2 || n==3){
        return 1;
    }
    return 1+ min(f(n-1),(n%2==0) ? f(n/2):INFINITY, (n%3==0)? f(n/3): INFINITY);
}

int main(){
    int n;
    cout<<"Enter a Number : "<<endl;
    cin>>n;
    cout<<"The ans is -->"<<f(n)<<endl;
}