#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

main() {
    int n;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    struct Book books[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for book %d:\n", i + 1);

        printf("Enter book title: ");
        scanf(" %[^\n]s", books[i].title); 

        printf("Enter author name: ");
        scanf(" %[^\n]s", books[i].author); 
        printf("Enter book price: ");
        scanf("%f", &books[i].price); 
    }

    printf("\n--- Book Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nBook %d details:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
    }

    return 0;
}