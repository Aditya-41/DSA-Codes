#include<bits/stdc++.h>
using namespace std;

int sum(int a, int b){
    cout<<"Int Ka FXN"<<endl;
    return a+b;
}
float sum(int a, int b){
    cout<<"Float FXN "<<endl;
    return (int)(a+b);
}
int main(){
    cout<<sum(4,6);
}