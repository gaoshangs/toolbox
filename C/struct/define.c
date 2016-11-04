#include <stdio.h>
#include <string.h>

struct Books
{
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
} Book3;

int main()
{
    struct Books Book1;
    struct Books Book2;

    strcpy( Book1.title, "Book1_title");
    strcpy( Book1.author, "Book1_author");
    strcpy( Book1.subject, "Book1_subject");
    Book1.book_id = 111;

    strcpy( Book2.title, "Book2_title");
    strcpy( Book2.author, "Book2_author");
    strcpy( Book2.subject, "Book2_subject");
    Book2.book_id = 222;

    strcpy( Book3.title, "Book3_title");
    strcpy( Book3.author, "Book3_author");
    strcpy( Book3.subject, "Book3_subject");
    Book3.book_id = 333;

    printf("Book1.title=%s\n", Book1.title);
    printf("Book1.author=%s\n", Book1.author);
    printf("Book1.subject=%s\n", Book1.subject);
    printf("Book1.book_id=%d\n", Book1.book_id);

    printf("Book2.title=%s\n", Book2.title);
    printf("Book2.author=%s\n", Book2.author);
    printf("Book2.subject=%s\n", Book2.subject);
    printf("Book2.book_id=%d\n", Book2.book_id);
    
    printf("Book3.title=%s\n", Book3.title);
    printf("Book3.author=%s\n", Book3.author);
    printf("Book3.subject=%s\n", Book3.subject);
    printf("Book3.book_id=%d\n", Book3.book_id);

    return 0;
}
