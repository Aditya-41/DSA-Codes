#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;

    int a[n];

    cout << "Enter a data for array : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Data before sorting : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // BUBBLE SORT REVERSAL

    for (int i = 0; i < n - 1; i++)

    {
        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                swap(a[j], a[j + 1]);
                flag = false;
            }
        }

        if (flag == true)
            break;
    }

    cout << "AFTER SORTING : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}