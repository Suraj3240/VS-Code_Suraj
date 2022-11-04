#include <stdio.h>
void main()
{
    int khe = 1, sal;
    printf("Enter the number of rows:");

    scanf("%d", &sal);
    int dr, un;
    for (dr = 1; dr <= sal; ++dr)
    {
        for (un = 1; un <= dr; un++)
        {

            printf("%d ", khe);

            khe++;
        }

        printf("\n");
    }
    printf("%d %d %d %d", dr, sal, un, khe);
}
