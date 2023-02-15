#include <stdio.h>
int partition(int *A, int low, int high)
{
    int i = low + 1;
    int j = high;
    int pivot = A[low];
    while (i < j)
    {
        while (A[i] <= pivot)
            i++;
        while (A[j] > pivot)
            j--;
        if (i < j)
        {
            // swap(A[i],A[j])
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    // swap(A[j],A[low])
    int temp_2 = A[j];
    A[j] = A[low];
    A[low] = temp_2;

    return j;
}

void quick_sort(int *A, int low, int high)
{
    if (low < high)
    {
        int p = partition(A, low, high);
        quick_sort(A, low, p - 1);
        quick_sort(A, p + 1, high);
    }
}
void display(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
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

    display(A, n);
    quick_sort(A, 0, n - 1);
    display(A, n);

    return 0;
}
