#include<bits\stdc++.h>

using namespace std;

void display(vector<int>&v, int idx)
{ 
    if(idx==v.size())
    { 
        return;
    }
    cout<<v[idx]<<" ";
    display(v,idx+1);
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
    display(v,0);
    return 0;
}