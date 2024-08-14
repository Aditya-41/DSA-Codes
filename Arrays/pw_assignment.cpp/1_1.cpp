// Q1 --> assignment 1 array

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
    int sum=0;
    for(int i=0;i<n;i++)
    { 
        sum+=a[i];
    }

    cout<<"Sum of all array elements is : "<<sum<<endl;
    return 0;
}