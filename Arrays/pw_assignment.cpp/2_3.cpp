

#include<bits/stdc++.h>


using namespace std;

int main()
{ 
    int n;
    cout<<"Enter the size of arry: "<<endl;
    cin>>n;
    int a[n];

    cout<<"Enter a Data : "<<endl;
    for(int i=0;i<n;i++)
    { 
        cin>>a[i];
    }
    int flag =0;
    for(int i=0;i<n;i++)
    { 
        if(a[i]>a[i+1])
            flag=1;
            break;
    }
    if(flag==1)
    { 
        cout<<"Array is not sorted : "<<endl;

    }
    else 
        cout<<"Array is sorted : "<<endl;


    
    return 0;
}