

#include<bits/stdc++.h>


using namespace std;

int main()
{ 
    int n;
    cout<<"Enter the size of arry: "<<endl;
    cin>>n;
    int a[n];

    cout<<"Enter a Data : "<<endl;
    for(int i=0;i<n;i++)
    { 
        cin>>a[i];
    }
    int sum0=0;
    int sum1=0;
    for(int i=0;i<n;i++)
    { 
        if(i%2==0)
        { 
            sum0+=a[i];
        }
        else
            sum1+=a[i];
    }
    int diff=0;
    diff = sum0-sum1;
    cout<<"Answer is : "<<diff<<endl;
    return 0;
}