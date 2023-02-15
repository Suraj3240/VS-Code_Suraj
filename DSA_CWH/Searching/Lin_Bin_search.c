#include <stdio.h>

int linear_search(int *A, int n, int ele)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] == ele)
        {
            printf("Element found at: %d\n", i + 1);
            return 1;
        }
    }
    printf("Element not found.\n");
    return 0;
}

int binary_search(int *A, int n, int ele)
{
    int i = 0, j = n - 1, mid;
    mid = (i + j) / 2;
    // mid = i + ((j - i) / 2);   this can also be used
    while (A[mid] != ele && i < j)
    {
        if (ele < A[mid])
        {
            j = mid - 1;
        }
        else if (ele > A[mid])
        {
            i = mid + 1;
        }
        mid = (i + j) / 2;
    }
    if (A[mid] == ele)
    {
        printf("Element found at: %d\n", mid + 1);
        return 1;
    }
    printf("Element not found.\n");
    return 0;
}

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    int ele;
    printf("Enter element to find: ");
    scanf("%d", &ele);
    linear_search(A, n, ele);
    binary_search(A, n, ele);

    return 0;
}