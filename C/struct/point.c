#include <stdio.h>
#include <string.h>

struct Books
{
    char title[50];
    int book_id;
};

void printBook(struct Books *Book)
{
    printf("Book.title = %s\n", Book->title);
    printf("Book.id = %d\n", Book->book_id);
    return ;
}

int main()
{
    struct Books Book1;    
    struct Books Book2;    

    strcpy(Book1.title, "Book1_title");
    Book1.book_id = 111;

    strcpy(Book2.title, "Book2_title");
    Book2.book_id = 222;
    
    printBook(&Book1);
    printBook(&Book2);
    return 0;
}
