#include<bits\stdc++.h>
using namespace std;


int pri(char c){
    if(c=='+' || c=='-'){
        return 1;
    }
    else{
        return 2;
    }
        
}
    
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
int calculate(string s) {
    int n = s.size();
    stack<int> val;
    stack<char> op;

    for(int i=0;i<n;i++){
        if(s[i]>=48 && s[i]<=57){
            int x = (int)s[i]-48;
            val.push(x);
        }
        else{
                
            if(op.size()==0 || pri(s[i]) > pri(op.top())){
                op.push(s[i]);
            }

            else{
                while(op.size()>0 && pri(s[i]) <= pri(op.top()) ){
                    char c = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();

                    int ans = solve(val1,val2,c);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    while(op.size()>0){
        char c = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();

        int ans = solve(val1,val2,c);
        val.push(ans);
    }
        
    return val.top();
    
}

int main(){
    string s ="3+5/2";
    cout<<calculate(s);
}