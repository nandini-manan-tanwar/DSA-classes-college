
#include <stdio.h>

int main()
{
    int a[100], n, i, key;
    int low, high, mid, found;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    
    found = 0;
    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("Linear Search: Found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Linear Search: Element not found\n");

    
    low = 0;
    high = n - 1;
    found = 0;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key) {
            printf("Binary Search: Found at position %d\n", mid + 1);
            found = 1;
            break;
        }
        else if (key < a[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if (!found)
        printf("Binary Search: Element not found\n");

    return 0;
}
