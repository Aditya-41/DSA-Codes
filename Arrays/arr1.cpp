#include<bits\stdc++.h>

using namespace std;

int main()
{ 
    int a[] = {9,9,19,10,9,12,2,12,3,3,11,5,8,4,13,6,2,11,9,19,11,15,9,17,15,12,5,14,12,16,18,16,10,3,8,9,16,20,2,4,16,12,11,14,20,16,2,18,17,20,3,13,16,17,1,1,11,20,20,4};

    int n = sizeof(a)/sizeof(a[0]);
    vector<int> v;
    cout<<n<<endl;
    for(int i=0;i<n;i++)
    { 
        v.push_back(a[i]);
    }

    sort(v.begin(),v.end());

    for(int j=0;j<n;j++)
    { 
        cout<<v[j]<<" ";
    }

}