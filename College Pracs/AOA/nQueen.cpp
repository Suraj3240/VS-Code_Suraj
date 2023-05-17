#include <bits/stdc++.h>
using namespace std;

bool isSafe(int arr[10][10], int x, int y, int n)
{
    for (int row = 0; row < x; row++) // same column
    {
        if (arr[row][y] == 1)
            return 0;
    }
    int row = x, col = y;
    while (row >= 0 && col >= 0) // upper left diagonal
    {
        if (arr[row][col] == 1)
            return 0;
        row--, col--;
    }
    row = x, col = y;
    while (row >= 0 && col < n) // upper right diagonal
    {
        if (arr[row][col] == 1)
            return 0;
        row--, col++;
    }
    return 1;
}

bool nQueen(int arr[10][10], int x, int n)
{
    if (x >= n)
        return 1;
    for (int col = 0; col < n; col++)
    {
        if (isSafe(arr, x, col, n))
        {
            arr[x][col] = 1;
            if (nQueen(arr, x + 1, n))
                return 1;
            arr[x][col] = 0; // backtrack
        }
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int arr[10][10];
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }

    if (nQueen(arr, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
                if (arr[i][j] == 1)
                {
                    ans[i] = j + 1;
                }
            }
            cout << endl;
        }
    }

    cout << endl;
    for (auto i : ans)
        cout << i << " ";
    return 0;
}