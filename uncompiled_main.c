#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Example: C99 variable declarations anywhere
    printf("Enter the number of elements: ");

    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    // C99 Feature: Variable-Length Array (VLA)
    int arr[n];

    // Input values
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {  // C99: loop variable declared inside for
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Exiting.\n");
            return 1;
        }
    }

    // Compute sum
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Compute average
    double average = (double)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
