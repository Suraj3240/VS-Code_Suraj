#include <stdio.h>
#include <conio.h>

void main()
{
    int n = 0;
    scanf("%i", &n);
    int h[n];
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &h[i]);
        if (h[i] > max)
        {
            max = h[i];
        }
    }

    int a[max];
    int answer = 0;
    for (int i = 0; i < max + 1; i++)
    {
        a[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        a[h[i] - 1]++;
    }
    getch();
}