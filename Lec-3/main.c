#include <stdio.h>

int main() {
    int myAge = 24;
    int* ptr = &myAge;
    printf("Value: %d\n", myAge);
    printf("Addres: %p\n", &myAge);
    myAge=40;
    printf("Addres: %p\n", ptr);
    printf("Value: %d\n", *ptr);

    int myNumbers[4] = {25, 50, 75, 100};
    for (int i =0; i < 4; i++) {
        printf("%d\n", myNumbers[i]);
        printf("%p\n", &myNumbers[i]);
    }

    // Get the memory address of the myNumbers array
    printf("%p\n", myNumbers);

    // Get the memory address of the first array element
    printf("%p\n", &myNumbers[0]);

    // Get the value of the first element in myNumbers
    printf("%d", *(myNumbers+1));

    return 0;
}