#include<iostream>

using namespace std;

int main()
{ 
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;

    int a[n];
    cout<<"Enter the array elements : "<<endl;
    for(int i=0;i<n;i++)
    { 
        cin>>a[i];
    }

    int x;
    cout<<"Enter a number : "<<endl;
    cin>>x;

    int cnt = 0;
    int lo = 0;
    int hi = n-1;
    while(lo<=hi)
    { 
        int mid = lo + (hi-lo)/2;

        if(a[mid]==x)
        { 
            cnt++;

        }
        else if(a[mid]>x)
        { 
            hi = mid-1;
        }
        else 
        { 
            lo = mid + 1;
        }

    }

    cout<<cnt;

}