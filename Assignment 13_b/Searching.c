#include <stdio.h>

int linearSearch(int a[], int n, int key) {
    int i;

    for (i = 0; i < n; i++) {
        if (a[i] == key)
            return i;
    }

    return -1;
}

int main() {
    int a[100], n, i, key, result;
    int (*search)(int[], int, int);

    search = linearSearch;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = search(a, n, key);

    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at position %d\n", result + 1);

    return 0;
}