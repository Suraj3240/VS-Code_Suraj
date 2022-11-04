#include <stdio.h>
#include <conio.h>
#include <string.h>

// int main()
void main()
{
    char a[20];
    printf("Enter a string: ");
    gets(a);
    int vow = 0, consonants = 0, digits = 0, spaces = 0;
    int len = strlen(a);
    for (int i = 0; i < len; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
            vow++;

        if (a[i] >= '0' && a[i] <= '9')
            digits++;

        if (a[i] == ' ')
            spaces++;

        if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
            consonants++;
    }

    printf("Number of \nVowels=%d\nConsonants=%d\nDigits=%d\nSpaces=%d\n", vow, consonants - vow, digits, spaces);
    getch();
    // return 0;
}