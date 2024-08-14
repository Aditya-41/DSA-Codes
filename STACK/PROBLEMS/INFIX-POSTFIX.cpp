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
    
string solve(string val1, string val2, char c){
    string s ="";
    
    s+=val1;
    s+=val2;
    s.push_back(c);
    return s;
}
string calculate(string s) {
    int n = s.size();
    stack<string> val;
    stack<char> op;

    for(int i=0;i<n;i++){
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));
        }
        else{
                
            if(op.size()==0 || pri(s[i]) > pri(op.top())){
                op.push(s[i]);
            }

            else{
                while(op.size()>0 && pri(s[i]) <= pri(op.top()) ){
                    char c = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();

                    string ans = solve(val1,val2,c);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    while(op.size()>0){
        char c = op.top();
        op.pop();
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();

        string ans = solve(val1,val2,c);
        val.push(ans);
    }
        
    return val.top();
    
}

int main(){
    string s ="2+6*4/8-3";
    cout<<calculate(s);
}