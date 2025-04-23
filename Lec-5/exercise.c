// Lets the user enter information about multiple students.
// Each student has
// Name
// Roll number
// Array of marks for 3 subjects

// Uses dynamic memory allocation to store an array of students.
// Calculates and displays:
// Each student’s average marks

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SUBJECTS 3

typedef struct {
    char *name;
    int roll_no;
    float marks[SUBJECTS];
    float average;
} Student;


int main() {

    Student *students = NULL;
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    students = malloc(n * sizeof(Student));
    if (students == NULL) {
        printf("\nMemory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        char tempName[100];
        printf("\n--- Enter details for student %d ---\n", i + 1);
        
        // NAME
        printf("Name: ");
        scanf(" %[^\n]", tempName);

        students[i].name = malloc((strlen(tempName) + 1) * sizeof(char));
        if (students[i].name == NULL) {
            printf("Memory allocation for name failed.\n");
            return 1;
        }

        strcpy(students[i].name, tempName);

        // ROLL NUMBER
        printf("Roll number: ");
        scanf("%d", &students[i].roll_no);

        // MARKS
        float total = 0.0;
        for(int j = 0; j < SUBJECTS; j++) {
            printf("Marks for Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
            total += students[i].marks[j];
        }

        // AVERAGE
        students[i].average = total/SUBJECTS;
    }

    // OUTPUT
    printf("\n=== STUDENT REPORT ===\n");
    for (int i = 0 ; i < n ;i++) {
        printf("\nStudent: %s\n", students[i].name);
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Average Marks: %.2f\n", students[i].average);
        
        free(students[i].name);
    }

    free(students);
    
    return 0;
}