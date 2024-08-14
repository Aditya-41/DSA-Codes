#include<bits/stdc++.h>
using namespace std;

int f(int n, int cnt){
    if(n==1){
        return cnt;
    }
    if(n%2==0){
        f(n/2,1+cnt);
    }
    if(n%2){
        f(n+1,1+cnt);
    }
    return cnt;
}

int numSteps(string s) {
    int n =  stoi(s, 0, 2);
    int cnt = 0;
    cout<<n<<endl;

    //return f(n,cnt);
}

int main(){
    string s = "110111100101101011010100111000010101001";
    numSteps(s);
    return 0;
}