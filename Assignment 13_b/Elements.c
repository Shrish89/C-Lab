#include <stdio.h>

int main() {
    int n, a[100], *p, i, largest, smallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    p = a;
    largest = smallest = *p;

    for (i = 1; i < n; i++) {
        if (*(p + i) > largest)
            largest = *(p + i);

        if (*(p + i) < smallest)
            smallest = *(p + i);
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}
