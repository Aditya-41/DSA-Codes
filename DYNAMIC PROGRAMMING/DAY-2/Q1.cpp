// Given a number n, count no.of binary strings of length n. without consecutive ones
#include<bits\stdc++.h>
using namespace std;

int f(int n){
    if(n==1 || n==2){
        return n;
    }
    return f(n-1)+(n-1)*f(n-2);
}
int main(){
    cout<<f(4)<<endl;
    return 0;
}