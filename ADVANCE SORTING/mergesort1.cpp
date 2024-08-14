#include<bits/stdc++.h>
using namespace std;

void merge( vector<int>&x, vector<int>&y)
{ 
    int i=0;
    int j=0;
    vector<int>ans;  
    while(i<x.size() && j<y.size())
    { 
        if(x[i]<y[j])
        { 
            ans.push_back(x[i]);
            i++;
        }
        else
        { 
            ans.push_back(y[j]);
            j++;
        }
    }
    while(i==x.size() && j<y.size())
    { 
        ans.push_back(y[j]);
        j++;
    }
    
    while(j==y.size() && i<x.size())
    { 
        ans.push_back(x[i]);
        i++;
    }
    for(int z=0;z<ans.size();z++)

    { 
        cout<<ans[z]<<" ";
    }
}
int main()
{ 
    int a;
    cout<<"Enter the size of 1st array : "<<endl;
    cin>>a;
    vector<int>x;
    cout<<"Enter the array 1st elements : "<<endl;
    for(int i=0;i<a;i++)
    { 
        int m;
        cin>>m;
        x.push_back(m);
    }
    int b;
    cout<<"Enter the size of 2nd array : "<<endl;
    cin>>b;
    vector<int>y;
    cout<<"Enter the elements of 2nd array : "<<endl;
    for(int i=0;i<b;i++)
    { 
        int m;
        cin>>m;
        y.push_back(m);
    }
    merge(x,y);
    return 0;
}