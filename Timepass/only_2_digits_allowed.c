#include <stdio.h>
#include <conio.h>

void main()
{
    int n, sum = 0, c = 0;
wapas:
{
    if (c < 5)
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        sum += n;
        c++;
        if (n > 9 && n < 100)
        {
            goto wapas;
        }
        else
        {
            printf("Thik se dal pagal\n");
            c--;
            sum -= n;
            goto wapas;
        }
    }
    else
    {
        printf("The sum is %d: ", sum);
    }
}
    getch();
}