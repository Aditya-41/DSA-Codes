#include<bits\stdc++.h>
using namespace std;

void RemoveChar(string ans, string org)
{ 
    if(org.size()==0)
    { 
        cout<<ans;
        return;
    }
    char ch = org[0];
    if(ch=='a')
    { 
        RemoveChar(ans,org.substr(1));
    }
    else
    { 
        RemoveChar(ans+ch,org.substr(1));
    }
}

int main()
{ 
    string s = "aditya patil";
   
    RemoveChar("",s);
    return 0;
}