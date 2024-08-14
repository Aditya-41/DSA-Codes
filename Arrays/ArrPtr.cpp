#include<iostream>
using namespace std;

int main()
{ 
    int a[5];
    int *ptr = a;
    cout<<"Enter an data : "<<endl;
    for(int i=0;i<5;i++)
    { 
        cin>>a[i];
    }
    cout<<"Output is : "<<endl;
    for(int i=0;i<5;i++)
    { 
        cout<<*ptr<<" ";
        ptr+=1;
    }
}