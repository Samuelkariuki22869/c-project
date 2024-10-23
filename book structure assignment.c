#include <stdio.h>
#include <string.h>

 struct book{
  char title[30];
  char author[30];
  int publicationyear;
  char ISBN[13];
  float price;
}book1;

int main()
{
    /**
    strcpy(book1.title,"introduction to c programming");
    strcpy(book1.author,"john smith");
    book1.publicationyear=2022;
    strcpy(book1.ISBN,"9780131103627");
    book1.price=49.99;

    printf("title: %s\n",book1.title);
    printf("author: %s\n",book1.author);
    printf("publicationyear: %d\n",book1.publicationyear);
    printf("ISBN: %s\n",book1.ISBN);
    printf("price: %f\n",book1.price);
    */

    //prompt user to enter
    printf("\n Enter the title:");
    scanf("%[^\n]", book1.title);
    printf("\n Enter the author:");
    scanf("%s",book1.author);
    printf("\n Enter the publicationyear:");
    scanf("%d", &book1.publicationyear);
    printf("\n Enter the ISBN:");
    scanf(" %[^\n]",book1.ISBN);
    printf("\n Enter the price:");
    scanf("%f", &book1.price);
}
