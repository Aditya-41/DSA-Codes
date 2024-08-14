// Q2 --> assignment 1 array
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
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    { 
        if(a[i]<min)
        { 
            min=a[i];
        }
        
    }
    cout<<"The minimum element of array is : "<<min<<endl;
}