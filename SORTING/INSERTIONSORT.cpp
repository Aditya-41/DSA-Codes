#include<bits\stdc++.h>

using namespace std;

int main()
{ 
    int n;
    cout<<"Enter a size of array : "<<endl;
    cin>>n;
    int a[n];

    cout<<"Enter a array data : "<<endl;

    for(int i=0;i<n;i++)
    { 

        cin>>a[i];
    }

    cout<<"ARRAY BEFORE SORTING : "<<endl;

    for(int i=0;i<n;i++)
    { 
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    // INSERTION SORT

    for(int i=1;i<n;i++)
    { 
        int j = i;
        while(j>=1 && a[j]<a[j-1])
        { 
            swap(a[j],a[j-1]);
            j--;
        }
    }

    cout<<"ARRAY AFTER SORTING : "<<endl;
    for(int i=0;i<n;i++)
    { 
        cout<<a[i]<<" ";
    }

}