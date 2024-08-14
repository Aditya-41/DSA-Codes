#include<bits\stdc++.h>
using namespace std;


int f(int n){
    int a = 0;
    int b = 1;
    if(n==0 ||n==1 ){
        return n;
    }
    int c;
    int i=2;
    while(i<=n){
        c = a+b;
        a = b;
        b = c;
        i++;
    }
    return c;
}
int main(){
    while(1){
        int n;
        cin>>n;
        cout<<f(n)<<endl;
    }
    return 0;
}