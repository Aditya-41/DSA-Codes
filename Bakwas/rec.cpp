#include<bits\stdc++.h>
using namespace std;


void f (int n){
    if(n==0){
        return;
    }
    
    f(n/10);
    cout<<n%10<<endl;
}

int main(){
    f(1667);
    return 0;
}