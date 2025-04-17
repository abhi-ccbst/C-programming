#include <stdio.h>
#include <stdlib.h>

void myFunction() {
    int *ptr;
    ptr = malloc(sizeof(*ptr));
}

int main() {
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu\n", sizeof(myInt));      // 4 bytes
    printf("%lu\n", sizeof(myFloat));    // 4 bytes
    printf("%lu\n", sizeof(myDouble));   // 8 bytes
    printf("%lu\n", sizeof(myChar));     // 1 byte

    // int students[20];
    // printf("%lu", sizeof(students));
    int *students;
    int numStudents;

    printf("Enter number of students: ");
    scanf("%d", &numStudents);

    students = calloc(numStudents, sizeof(*students));
    printf("Total memory allocated: %d bytes\n", numStudents * (int)sizeof(*students));

    // Input student values
    printf("Enter the student values (e.g., scores or IDs):\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &students[i]);
    }

    // Print stored values
    printf("\nYou entered:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: %d\n", i + 1, students[i]);
    }
    free(students);


    int *ptr1, *ptr2, size;

    // Allocate memory for four integers
    size = 4 * sizeof(*ptr1); // 16
    ptr1 = malloc(size);
  
    printf("%d bytes allocated at address %p \n", size, ptr1);
  
    // Resize the memory to hold six integers
    size = 6 * sizeof(*ptr1); // 24
    ptr2 = realloc(ptr1, size);
  
    printf("%d bytes reallocated at address %p \n", size, ptr2);
    printf("%d bytes allocated at address %p \n", size, ptr1);

    free(ptr1);
    ptr1 = NULL;

    int x = 5;
    int *ptr;
    ptr = calloc(2, sizeof(*ptr));
    ptr = &x;
}