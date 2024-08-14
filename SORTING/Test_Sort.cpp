#include<bits\stdc++.h>

using namespace std;

int main()
{ 

    
    int a[] = {87063,61094,44530,21297,95857,93551,9918};

    int n = sizeof(a)/sizeof(a[0]);

    
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