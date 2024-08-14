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

    cout << "Data before sorting : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    // SELECTION SORT 

    for (int i = 0; i < n - 1; i++)
    {
        int min = INT_MAX;
        int mindex = -1;
        for (int j = i; j < n; j++)
        {
            if (a[j] < min)
            {
                min = a[j];
                mindex = j;
            }
        }

       swap(a[i],a[mindex]);
    }
    cout << endl;

    cout << "Data after sorting : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}