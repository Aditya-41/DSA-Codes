#include<bits\stdc++.h>
using namespace std;



    
int solve(int val1, int val2, char c){
    int a = val1;
    int b = val2;
    if(c=='+'){
        return a + b;
    }
    else if(c=='-'){
        return a - b;
    }
    else if(c=='*'){
        return a * b;
    }
    else{
        return a / b;
    }
}
int calculate(string s){
    int n = s.size();
    stack<int> val;
   

    for(int i=0;i<n;i++){
        if(s[i]>=48 && s[i]<=57){
            int x = (int)s[i]-48;
            val.push(x);
        }
        else{
            int val2 = val.top();
            val.pop();
            int val1 = val.top();
            val.pop();
            int ans = solve(val1,val2,s[i]);
            val.push(ans);
        }
    }    
    return val.top();
    
}

int main(){
    string s ="79+4*8/3-";
    cout<<calculate(s);
}