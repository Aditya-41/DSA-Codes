#include<bits\stdc++.h>
using namespace std;

void subset(string ans, string org)
{ 
    if(org=="")
    { 
        cout<<ans<<endl;
        return;
    }
    char ch = org[0];
    subset(ans,org.substr(1));
    subset(ans+ch,org.substr(1));
    return;
}

int main()
{ 
    string s = "abc";
    subset("",s);
}