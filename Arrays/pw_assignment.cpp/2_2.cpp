
#include<bits/stdc++.h>


using namespace std;

int main()
{ 
    int n;
    cout<<"Enter the size of arry: "<<endl;
    cin>>n;
    int a[n];
    int max1=INT_MIN;
    int max2=INT_MIN;
    int max3=INT_MIN;

    cout<<"Enter a Data : "<<endl;
    for(int i=0;i<n;i++)
    { 
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    { 
        if(a[i]>max1)
        { 
            max3=max2;
            max2=max1;
            max1=a[i];

        }
        else if(a[i]>max2)
        { 
            max3=max2;
            max2=a[i];
        }
        else if(a[i]>max3)
        { 
            max3=a[i];
        }
        
    }
    cout<<"Max 3 elements in array is : "<<max1<<" "<<max2<<" "<<max3<<endl;

   
    return 0;
}