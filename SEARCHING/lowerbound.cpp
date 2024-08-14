#include <bits\stdc++.h>

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

    int low = 0;
    int high = n - 1;

    

    while (low <= high)
    {

        int mid = low + (high - low) / 2;

        if (a[mid] == x)
        {

            cout<<a[mid-1];
        }

        else if (a[mid] > x)
        {
            high = mid - 1;
        }

        else
        {
            low = mid + 1;
        }

        
    }

    
    
        cout << "The lower bound of element is  : " << high << endl;
    

  

    return 0;
}
