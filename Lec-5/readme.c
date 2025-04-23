#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store employee data
typedef struct {
    char *name;
    int id;
    float salary;
} Employee;

// Function to sort employees by salary in descending order
void sortBySalary(Employee *employees, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (employees[i].salary < employees[j].salary) {
                Employee temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    Employee *employees = NULL;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    employees = (Employee *)malloc(n * sizeof(Employee));
    if (employees == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    char tempName[100];

    // Input employee data
    for (int i = 0; i < n; i++) {
        printf("\n--- Employee %d ---\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", tempName);
        employees[i].name = (char *)malloc((strlen(tempName) + 1) * sizeof(char));
        if (employees[i].name == NULL) {
            printf("Memory allocation failed for name.\n");
            return 1;
        }
        strcpy(employees[i].name, tempName);

        printf("ID: ");
        scanf("%d", &employees[i].id);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Sort employees by salary
    sortBySalary(employees, n);

    // Display sorted employees
    printf("\n=== Employees Sorted by Salary (Descending) ===\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, ID: %d, Salary: %.2f\n",
               employees[i].name, employees[i].id, employees[i].salary);
    }

    // Free memory
    for (int i = 0; i < n; i++) {
        free(employees[i].name);
    }
    free(employees);

    return 0;
}
