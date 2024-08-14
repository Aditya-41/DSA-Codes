#include<iostream>
using namespace std;

int main()
{ 
    int arr1[4]={1,3,5,8};
    int arr2[5]={2,4,6,9,10};
    int arr3[9];

    int a=0;
    int b=0;
    int c=0;

    while(c<9)
    { 
        if(arr1[a]<arr2[b])
        { 
            arr3[c]=arr1[a];
            a++;
            c++;
        }
        else
        { 
            arr3[c]=arr2[b];
            b++;
            c++;
        }
        if(b>4)
        { 
            arr3[c]=arr2[b];
            c++;
            b++;
        }
    }
    for(int x=0;x<9;x++)
    { 
        cout<<arr3[x]<<" ";
    }



}