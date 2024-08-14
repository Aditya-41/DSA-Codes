#include<bits\stdc++.h>

using namespace std;

string RemoveDup(string &s){
    
    stack<char> st;
    st.push(s[0]);
    for(int i=0;i<s.size();i++){
        if(s[i]!=st.top()){
            st.push(s[i]);
        }
        // else{
        //     if(st.size()==0){
        //         return false;
        //     }
        //     else{
        //         st.pop();
        //     }
        // }
    }
    s = "";
    while(st.size()){
        s.push_back(st.top());
        st.pop();
    }
    reverse(s.begin(),s.end());

    return s;
    
}
int main(){
    
    string s = "aaabbdccfffgnss";
    RemoveDup(s);
    cout<<s;
}