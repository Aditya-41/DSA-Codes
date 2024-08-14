
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
    int count =0;
    for(int i=0;i<n;i++)
    { 
        count=0;
        for(int j=0;j<n;j++)
        { 
            if(j!=i && a[i]!=a[j])
                count++;
                
        
            if(count==(n-1))
            {    cout<<"The first non repeated number is : "<<a[i]<<endl;
                i=n;
                j=n;

                
           
            }
        }
        
    }

   
    return 0;
}