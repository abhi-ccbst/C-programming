#include <stdio.h>
#include <stdlib.h>

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

}