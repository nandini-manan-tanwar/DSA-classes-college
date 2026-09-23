#include <stdio.h>
#define MAX 100
int stack[MAX], top = -1;
void push(int x) { stack[++top] = x; }
int pop() { return stack[top--]; }
void reverseArray(int arr[], int n) {
for (int i = 0; i < n; i++)
push(arr[i]); // step 1: push everything
for (int i = 0; i < n; i++)
arr[i] = pop(); // step 2: pop back in reverse order
}
int main() {
int arr[] = {10, 20, 30, 40, 50};
int n = 5;
reverseArray(arr, n);
printf("Reversed array: ");
for (int i = 0; i < n; i++)
printf("%d ", arr[i]); // 50 40 30 20 10
return 0;
}