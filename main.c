/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct Book
{
    int book_id;
    char book_name[30];
};

void display(struct Book b)
{
    printf("Book ID = %d\n", b.book_id);
    printf("Book Name = %s\n", b.book_name);
}

int main()
{
    struct Book b1;

    printf("Enter Book ID: ");
    scanf("%d", &b1.book_id);

    printf("Enter Book Name: ");
    scanf("%s", b1.book_name);

    display(b1);

    return 0;
}