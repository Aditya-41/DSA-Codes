#include<bits\stdc++.h>
using namespace std;

int bindec(string &ans)
{ 
    int n=ans.size();
    int result = 0;
    for(int i=n-1;i>=0;i--)
    { 
        char ch = ans[i];
        int num = ch - '0';

        result += num*(1 << (n-i-1));
    }
    return result;
}

string decbin(int n)
{ 
    string result ="";
    while(n>0)
    { 
        if(n%2==0)
        { 
            result = '0'+result;
        }
        else{
            result = '1'+result;
        }

        n/=2;
    }

    return result;
}

int main()
{ 
    string str = "111";
   // cout<<decbin(4);

   cout<<bindec(str);

    return 0;
}
