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

    cout<<"Enter the data for array A : "<<endl;

    int a[m][n];

    

    for(int i=0;i<m;i++)
    { 
        for(int j=0;j<n;j++)
        { 
            cin>>a[i][j];
        }
    }

    cout<<"Enter the for Array B : "<<endl;

    int b[m][n];

    for(int i=0;i<m;i++)
    { 
        for(int j=0;j<n;j++)
        { 
            cin>>b[i][j];
        }
    }

    for(int i=0;i<m;i++)
    { 
        for(int j=0;j<n;j++)
        { 
            a[i][j]+=b[i][j];
        }
    }

    cout<<"Result of addition : "<<endl;

     for(int i=0;i<m;i++)
    { 
        for(int j=0;j<n;j++)
        { 
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}