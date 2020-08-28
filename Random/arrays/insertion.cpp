#include <bits/stdc++.h>
#include <process.h>
using namespace std;
int pos(int a[], int size, int item);
int main()
{
    int i, n, a[50], temp, item, index;
    cout << "enter the number of array you want ";
    cin >> n;
    cout << "\nenter the element";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    } 
    char ch = 'y'; 
    while (ch == 'y' || ch == 'Y')
    {
        cout << "\n enter the item to be inserted";
        cin >> item;
        if (n == 50)
        {
            cout << "overflow";
            exit(1);
        }
        index = pos(a, n, item);
        for (i = n; i > index; i--)
        {
            a[i] = a[i - 1];
        }
        a[index] = item;
        n = n + 1;  
        cout << "would you like to add more";
        cin >> ch;
    }
    cout<<"\n\n\nthe now shown is ";
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}

int pos(int a[], int size, int item)
{
    int pos, i;
    if (item < a[0])
    {
        pos = 0;
    }
    else
    {
        for (i = 0; i < size - 1; i++)
        {
            if (a[i] <= item && item < a[i + 1])
            {
                pos = i + 1;
            }
        }
        if (i == size - 1)
        {
            pos = size;
        }
    }
    return pos;
}