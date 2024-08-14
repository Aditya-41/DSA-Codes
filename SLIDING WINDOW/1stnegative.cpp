#include<bits\stdc++.h>
using namespace std;

int main()
{ 
    int arr[] = {2,-3,4,4,-7,-1,4,-2,6};
    
    int k = 4;
    int n = 9;
    vector<int>ans(n-k+1);
    int idx = -1;
    for(int i=0;i<k;i++)
    { 
        if(arr[i]<0)
        { 
            idx = i;
            break;
        }
    }
    if(idx==-1)
    { 
        ans[0]=1;
    }
    else
    { 
        ans[0]=arr[idx];
    }
    int i=1;
    int j=k;
    while(j<n)
    { 
        if(idx>=i)
        { 
            ans[i]=arr[idx];
        }
        else{ 
            idx = -1;
            for(int x=i;x<=k;x++)
            { 
                if(arr[x]<0)
                { 
                    idx = x;
                    break;
                }
                
            }
            if(idx == -1)
            { 
                ans[i]=1;
            }
            else{ 
                ans[i]=arr[idx];
            }
        }
    }
    for(int i=0;i<n;i++)
    { 
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-k+1;i++)
    { 
        cout<<ans[i]<<" ";
    }

    return 0;

}