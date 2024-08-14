#include<bits\stdc++.h>

using namespace std;

int main()
{ 
    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;

    int a[n];
    cout << "Enter a Data " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cout << "Enter the searching element : " << endl;
    cin >> x;

    int idx = -1;

    for(int i=n-1;i>=0;i--)
    { 
        if(a[i]==a[i-1])
        { 
            idx = i;
            break;

        }
    }

    cout<<"THE LAST OCCURRUNCE OF X IS AT INDEX  "<<idx<<endl;
}