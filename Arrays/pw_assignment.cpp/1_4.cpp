
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
    int flag =-1;
    for(int i=0;i<n;i++)
    { 
        for(int j=i+1;j<n;j++)
        { 
            if(a[i]==a[j])
                flag = 1;

            break;
        }
    }
    if(flag==1)
    { 
        cout<<"Duplicates are present in array : "<<endl;
    }
    else
    { 
        
        cout<<"Duplicates are not present in array : "<<endl;

    }
   
    return 0;
}