// Key functions from <stdlib.h>:
// malloc(size_t size) – allocates memory block of given size in bytes.
// calloc(size_t num, size_t size) – allocates memory for an array and initializes all bytes to zero.
// realloc(void *ptr, size_t size) – changes the size of the previously allocated memory block.
// free(void *ptr) – deallocates the memory previously allocated.

// Write a C program that:
// Asks the user to input how many integers they want to store.
// Dynamically allocates memory for that many integers.
// Reads the integers from the user.
// Calculates and displays the average.
// Frees the allocated memory.


#include <stdio.h>
#include <stdlib.h>


int main() {
    int *numbers = NULL;
    int sum = 0;
    int n;
    printf("How many numbers you wanna save?: ");
    scanf("%d", &n);

    numbers = malloc(n * sizeof(int));
    if (numbers == NULL) {
        printf("\nMemory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("Average of the entered numbers: %.2f\n", (float) sum/n);

    free(numbers);
    
    return 0;
}
