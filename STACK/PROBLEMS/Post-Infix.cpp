#include<bits\stdc++.h>
using namespace std;



    
string solve(string val1, string val2, char c){
   string s= "";
   s+=val1;
   s.push_back(c);
   s+=val2;

   return s;
}
string calculate(string s){
    int n = s.size();
    stack<string> val;
   

    for(int i=0;i<n;i++){
        if(s[i]>=48 && s[i]<=57){
            int x = (int)s[i]-48;
            val.push(to_string(x));
        }
        else{
            string val2 = val.top();
            val.pop();
            string val1 = val.top();
            val.pop();
            string ans = solve(val1,val2,s[i]);
            val.push(ans);
        }
    }    
    return val.top();
    
}

int main(){
    string s ="79+4*8/3-";
    cout<<calculate(s);
}