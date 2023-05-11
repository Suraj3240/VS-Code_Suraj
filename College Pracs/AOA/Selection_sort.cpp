#include <bits/stdc++.h>
using namespace std;

void selection_sort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int i_min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i_min])
                i_min = j;
        }
        swap(arr[i], arr[i_min]);
    }
}

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    print(arr, n);
    selection_sort(arr, n);
    print(arr, n);

    return 0;
}