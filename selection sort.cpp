#include <stdio.h>
int main() {
    int a[100], n, i, j, min, temp;
    printf("Enter number of elements:\n");
    scanf("%d", &n);
    printf("Enter values:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min]; 
        a[min] = temp;
    }
    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

