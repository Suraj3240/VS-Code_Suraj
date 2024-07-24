#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

void print(vector<int> &v)
{
    for (auto &i : v)
        cout << i << " ";
    cout << endl;
}

void bubbleSort(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        bool f = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (v[j] > v[j + 1])
            {
                f = 1;
                swap(v[j], v[j + 1]);
                // int t = v[j];
                // v[j] = v[j + 1];
                // v[j + 1] = t;
            }
        }
        if (!f)
            break;
    }
    print(v);
}

void insertionSort(vector<int> v)
{
    int n = v.size();
    for (int j = 1; j < n; j++)
    {
        int i = j - 1;
        int key = v[j];
        while (i >= 0 && key < v[i])
        {
            v[i + 1] = v[i];
            i--;
        }
        v[i + 1] = key;
    }
    print(v);
}

void selectionSort(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        int miniIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[miniIdx] > v[j])
            {
                miniIdx = j;
            }
        }
        swap(v[miniIdx], v[i]);
    }
    print(v);
}

int partition(vector<int> &v, int low, int high)
{
    int pivot = v[low];
    int i = low, j = high;
    while (i < j)
    {
        while (v[i] <= pivot)
            i++;
        while (v[j] > pivot)
            j--;
        if (i < j)
            swap(v[i], v[j]);
    }
    swap(v[low], v[j]);
    return j;
}

void quickSort(vector<int> &v, int low, int high)
{
    if (low >= high)
        return;
    int pIdx = partition(v, low, high);
    quickSort(v, low, pIdx - 1);
    quickSort(v, pIdx + 1, high);
}

void merge(vector<int> &v, int low, int mid, int high)
{
    vector<int> temp;
    int i = low, j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (v[i] <= v[j])
        {
            temp.push_back(v[i++]);
        }
        else
        {
            temp.push_back(v[j++]);
        }
    }
    while (i <= mid)
        temp.push_back(v[i++]);
    while (j <= high)
        temp.push_back(v[j++]);

    for (int i = low; i <= high; i++)
    {
        v[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &v, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergeSort(v, low, mid);
    mergeSort(v, mid + 1, high);
    merge(v, low, mid, high);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    print(v);
    mergeSort(v, 0, n - 1);
    print(v);

    return 0;
}