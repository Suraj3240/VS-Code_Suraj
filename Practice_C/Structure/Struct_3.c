/*
Write a nested structure to store information of a book i.e title of the book,
author name, name of publisher, edition, ISBN number. Author name and publisher
name should be a structure with 2 elements in it which are first name and surname.
*/

#include <stdio.h>
#include <conio.h>

struct book
{
    char book_name[20];
    int edition, isbn;
    struct
    {
        char first_name[10], surname[10];
    } author;
    struct
    {
        char first_name[10], surname[10];
    } publisher;
};

void main()
{
    struct book e1[20];
    int n;
    printf("Enter no of books: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter name of book: ");
        scanf("%s", &e1[i].book_name);
        printf("Enter First name of Author: ");
        scanf("%s", &e1[i].author.first_name);
        printf("Enter surname of Author: ");
        scanf("%s", &e1[i].author.surname);
        printf("Enter First name of Publisher: ");
        scanf("%s", &e1[i].publisher.first_name);
        printf("Enter surname of Publisher: ");
        scanf("%s", &e1[i].publisher.surname);
        printf("Enter edition of book: ");
        scanf("%d", &e1[i].edition);
        printf("Enter ISBN no of book: ");
        scanf("%d", &e1[i].isbn);
        printf("\n");
    }
    int num_1 = 1;
    printf("|No.\t|Name\t\t|Author\t\t|Publisher\t\t|Edition\t|ISBN no.\n");
    for (int i = 0; i < n; i++)
    {
        printf("|%d\t|%s\t\t|%s %s\t|%s %s\t\t|%d\t\t|%d\n", num_1, e1[i].book_name,
               e1[i].author.first_name, e1[i].author.surname, e1[i].publisher.first_name,
               e1[i].publisher.surname, e1[i].edition, e1[i].isbn);
        num_1++;
    }

    getch();
}