#include<bits\stdc++.h>
using namespace std;

int power(int x , int n)
{ 
    if(n==0)
    { 
        return 1;
    }
    int ans = 1;
    if(n%2==0)
    { 
        ans = power(x,n/2)*power(x,n/2);
    }
    if(n%2!=0)
    { 
        ans = x*power(x,n/2)*power(x,n/2);
    }

    return ans;
}

int main()
{ 
    int n;
    cout<<"Enter the power digit :  "<<endl;
    cin>>n;

    int x;
    cout<<"Enter the base digit : "<<endl;
    cin>>x;

    cout<<"The answer is : "<<power(x,n)<<endl;

    return 0;
}