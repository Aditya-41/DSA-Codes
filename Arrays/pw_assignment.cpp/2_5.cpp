
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
    for(int i=0;i<n;i++)
    { 
        if(i%2==0)
        { 
            a[i]+=10;
        }
        else
            a[i]=2*a[i];

    }
    for(int i=0;i<n;i++)
    { 
        cout<<a[i]<<" ";
    }


    return 0;
}