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

    cout<<"Enter the data : "<<endl;

    for(int i=0;i<m;i++)
    { 
        for(int j=0;j<n;j++)
        { 
            cin>>a[m][n];
        }
    }
    int largeno=0;
    for(int i=0;i<m;i++)
    { 
        for(int j=0;j<n;j++)
        { 
            if(a[i][j]>largeno)
            { 
                largeno=a[i][j];
            }
        }
    }

    cout<<"Largest no in a given array is :  "<<largeno;
}