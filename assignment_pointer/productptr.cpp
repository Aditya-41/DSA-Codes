#include<iostream>
using namespace std;

int main()
{ 
    int a,b;
    cout<<"Enter a number1 : "<<endl;
    cout<<"Enter a number2 : "<<endl;
    cin>>a>>b;

    int *x = &a;
    int* y = &b;

    int m = (*x)*(*y);

    cout<<m;
}