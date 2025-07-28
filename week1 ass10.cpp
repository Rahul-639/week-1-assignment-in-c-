#include <stdio.h>
#include <stdlib.h>

// Function to reverse the array
int* reverseArray(int* A, int n) {
    int* reversed = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        reversed[i] = A[n - 1 - i];
    }
    return reversed;
}

int main() {
    int n;
    scanf("%d", &n);

    int A[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int* reversed = reverseArray(A, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", reversed[i]);
    }

    free(reversed);  // Free the allocated memory
    return 0;
}
