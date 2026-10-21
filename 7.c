
#include <stdio.h>

int a[100], n, i, j, temp;
int min, key;

void bubble_sort()
{
    

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\nBubble Sort: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

}
void insertion_sort()
{
    printf("\nEnter array elements again:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 1; i < n; i++) 
    {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    printf("Insertion Sort: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

}
void selection_sort()
{
    printf("\nEnter array elements again:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n - 1; i++) 
    {
        min = i;

        for (j = i + 1; j < n; j++) 
        {
            if (a[j] < a[min])
                min = j;
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("Selection Sort: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);


}
int main() {
    int choice;

    do {
        printf("\n--- MENU ---\n");
        printf("1. bubble\n2. insert\n3. selection\n4. exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
               bubble_sort();
                break;

            case 2:
                insertion_sort();
                break;

            case 3:
                selection_sort();
                break;

            case 4:
                printf("Program Ended\n");
                break;

            default:
                printf("Invalid Choice\n");
        }
    } while (choice != 4);

    return 0;
}
