#include<bits\stdc++.h>

using namespace std;

int stairs(int x)
{ 
    if(x==2)
    { 
        return 2;
    }
    if(x==1)
    { 
        return 1;
    }

    return stairs(x-1) + stairs(x-2);
}

int main()
{ 
    int n;
    cout<<"Enter the no of stairs : "<<endl;
    cin>>n;

    cout<<"The no of ways to reach last stairs is : "<<stairs(n);

    return 0;
}