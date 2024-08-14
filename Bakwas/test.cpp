#include<bits\stdc++.h>
using namespace std;

int main(){
    unordered_map<char,int> m;
    string s = "";

    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    cout<<m.size()<<endl;
    for(auto i : m){
        cout<<i.first<<" -> "<<i.second<<endl;
    }
    cout<<s.size()<<endl;

    return 0;
}