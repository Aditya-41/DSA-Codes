#include<iostream>
using namespace std;

void sqr(int a)
{ 
    int x =0;
   while(a>0)
   { 
        x++;
       a/=10;
   }
   cout<<x<<endl;
   cout<<x*x<<endl;
}

int main()
{ 
    int a;
    cout<<"Enter a number : "<<endl;
    cin>>a;
    sqr(a);
    

    return 0;
}