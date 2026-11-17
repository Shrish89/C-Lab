#include <stdio.h>

struct Product {
    int code;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Product products[10];
    struct Product *ptr[10];
    int n, i;

    printf("Enter number of products: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        ptr[i] = &products[i];

        printf("\nEnter details of product %d:\n", i + 1);

        printf("Enter product code: ");
        scanf("%d", &ptr[i]->code);

        printf("Enter product name: ");
        scanf(" %49[^\n]", ptr[i]->name);

        printf("Enter quantity: ");
        scanf("%d", &ptr[i]->quantity);

        printf("Enter price: ");
        scanf("%f", &ptr[i]->price);
    }

    printf("\nProduct Details:\n");

    for (i = 0; i < n; i++) {
        printf("\nProduct %d\n", i + 1);
        printf("Code = %d\n", ptr[i]->code);
        printf("Name = %s\n", ptr[i]->name);
        printf("Quantity = %d\n", ptr[i]->quantity);
        printf("Price = %.2f\n", ptr[i]->price);
    }

    return 0;
}