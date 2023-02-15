#include <iostream>
using namespace std;

// Check whether the array can be divided into
// two sub-arrays with equal XOR or not.
bool canDivide(int arr[], int n)
{
    int xorSum = 0;
    for (int i = 0; i < n; i++)
    {
        xorSum ^= arr[i];
    }

    if (xorSum == 0)
        return true;
    return false;
}

int main()
{
    int a;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    if (canDivide(arr, a))
    {
        cout << "The array can be divided into two sub-arrays with equal XOR." << endl;
    }
    else
    {
        cout << "The array cannot be divided into two sub-arrays with equal XOR." << endl;
    }

    return 0;
}
