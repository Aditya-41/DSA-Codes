#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &a, vector<int> &b, vector<int> &x)
{
    x.clear();
    int i = 0;
    int j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            x.push_back(a[i]);
            i++;
        }
        else
        {
            x.push_back(b[j]);
            j++;
        }
    }
    while (i == a.size() && j < b.size())
    {
        x.push_back(b[j]);
        j++;
    }

    while (j == b.size() && i < a.size())
    {
        x.push_back(a[i]);
        i++;
    }

    return;
}
void mergesort(vector<int> &x)
{
    int n = x.size();
    if (n == 1)
    {
        return;
    }
    int n1 = n / 2;
    int n2 = n - n1;
    vector<int> a(n1);
    vector<int> b(n2);

    for (int i = 0; i < n1; i++)
    {
        a[i] = x[i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = x[n1 + i];
    }
    mergesort(a);
    mergesort(b);
    merge(a, b, x);
    a.clear();
    b.clear();
    return;
}
int main()
{
    int a;
    cout << "Enter the size of array : " << endl;
    cin >> a;
    vector<int> x;
    cout << "Enter the array elements : " << endl;
    for (int i = 0; i < a; i++)
    {
        int m;
        cin >> m;
        x.push_back(m);
    }

    mergesort(x);
    int m = x.size();
    for (int i = 0; i < m; i++)
    {
        cout << x[i] << " ";
    }
    return 0;
}