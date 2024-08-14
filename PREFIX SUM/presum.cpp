#include<bits\stdc++.h>
using namespace std;

int main()
{ 
    int n;
    cout<<"Enter the size of Array : "<<endl;
    cin>>n;
    vector<int> a;
    cout<<"Enter the Array data : "<<endl;
    int x;
    for(int i=0;i<n;i++)
    { 
        cin>>x;
        a.push_back(x);
    }
    vector<int> presum;
    int sum =0;
    for(int i=0;i<n;i++)
    { 
        sum+=a[i];
        presum.push_back(sum);
    }
    int pivot;
    bool flag = false;
    for(int i=0;i<n;i++)
    {
        if(2*presum[i]==presum[n-1])
        { 
            flag = true;
            pivot=i+1;
            break;
        }
    }
    if(flag==true)
    { 
        cout<<pivot<<endl;
        return 0;
    }
    else 
    { 
        cout<<"Not Found"<<endl;
    }

    return 0;

    
}