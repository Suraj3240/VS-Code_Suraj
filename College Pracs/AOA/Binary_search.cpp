#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int target)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
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
    int tar;
    cin >> tar;
    int idx = binary_search(arr, n, tar);
    if (idx == -1)
        cout << "No such elem found.\n";
    else
        cout << "Elem found at: " << idx << endl;
    return 0;
}