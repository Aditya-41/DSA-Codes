#include<bits\stdc++.h>
using namespace std;

void maxofarray(vector<int>&v,int idx,int max)
{ 
    if(idx==v.size())
    { 
        cout<<max;
        return;
    }
    if(v[idx]>max)
    { 
        max=v[idx];
    }
    maxofarray(v,idx+1,max);
    return;
}

int main()
{ 
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    vector<int>v;
    cout<<"Enter the array elements : "<<endl;

    for(int i=0;i<n;i++)
    { 
        int m;
        cin>>m;
        v.push_back(m);
    }
    maxofarray(v,0,INT_MIN);
    return 0;
}