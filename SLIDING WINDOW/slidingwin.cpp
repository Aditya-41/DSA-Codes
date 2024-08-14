#include<bits\stdc++.h>

using namespace std;

int main()
{ 
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = 9;
    int k = 4;
    int prevsum = 0;
    int maxidx = -1;

    for(int m=0;m<k;m++)
    { 
        prevsum+=arr[m];
    }
    int maxsum = prevsum;
    int i=1;
    int j = k;
    while(j<n)
    { 
        int currsum = prevsum +arr[j] - arr[i-1];
        if(maxsum<currsum)
        { 
            maxsum = currsum;
            maxidx = i;
        }
        prevsum = currsum;
        i++;
        j++;
    }
    cout<<maxsum<<endl;
    cout<<maxidx<<endl;

    return 0;
}