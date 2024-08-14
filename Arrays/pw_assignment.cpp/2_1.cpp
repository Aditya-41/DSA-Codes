

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
    int x=11;
    int count =0;
    for(int i=0;i<n;i++)
    { 
        if(a[i]>x)
            count++;
            
    }
    cout<<count <<endl;

   
    return 0;
}