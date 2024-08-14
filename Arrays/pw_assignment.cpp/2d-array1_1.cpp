#include<bits/stdc++.h>

using namespace std;

int main()
{ 
    int m;
    cout<<"Enter no of rows : "<<endl;
    cin>>m;

    int n;
    cout<<"Enter no of coloums : "<<endl;
    cin>>n;
    int a[m][n];

    for(int i=0;i<m;i++)
    { 
        for(int j=0;j<n;j++)
        { 
            a[m][n]=10;
        }
    }

     for(int i=0;i<m;i++)
    { 
        for(int j=0;j<n;j++)
        { 
            cout<<a[m][n]<<" ";
        }
        cout<<endl;
    }
}