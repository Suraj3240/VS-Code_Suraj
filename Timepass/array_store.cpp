#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[10], b[10], prod[10], arr[20], j;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "\nEnter array a:\n";
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter array b:\n";
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    for (int i = 1; i <= n; i++)
    {
        prod[i] = a[i] * b[i];
        arr[i] = prod[i];
    }
    cout << "\n\nArray a:\n ";
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\nArray b:\n ";
    for (int i = 1; i <= n; i++)
    {
        cout << b[i] << " ";
    }
    cout << "\nProduct Array:\n ";
    // cout << "\n\n";
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    // cout << "\n\n";
    return 0;
}