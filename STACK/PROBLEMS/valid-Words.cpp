#include<bits\stdc++.h>
using namespace std;

string minRemoveToMakeValid(string s) {
    int n = s.length();
    stack<char> st;
    int cnt = 0;

    for(int i=0;i<n;i++){
        if(s[i]=='('){
            st.push(s[i]);
            cnt++;
        }
        else if(s[i]==')' && cnt>0){
            cnt--;
            st.push(s[i]);
                
        }
        else if(s[i]!='(' && s[i]!=')'){
            st.push(s[i]);
            
        }
        
    }
    string m="";
        
    while(st.size()>0){
        char c = st.top();
        m.push_back(c);
        st.pop();
    }
    reverse(m.begin(),m.end());
    return m;
}

int main(){
    string ans = "lee(t(c)o)de)";
    cout<<minRemoveToMakeValid(ans);
}