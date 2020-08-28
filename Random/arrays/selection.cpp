#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, temp, n, a[10];

    cout << "how many elements would you like to insert";
    cin >> n;
    cout << "\n enter the number";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "\n\nthe sorted array is";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}