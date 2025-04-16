#include <stdio.h>

void printMyBio(char name[], int age) {
    printf("=====================================\n");
    printf("\t\"Self Information Card\"\n");
    printf("=====================================\n");

    printf("Name\t\t: \"%s\"\n", name);
    printf("Age\t\t: %d\n", age);
    printf("Profession\t: \"Software Developer\"\n");
    printf("Hobbies\t\t: \"Reading\\Coding\\Gaming\"\n");

    printf("=====================================\n");
    printf("\tThank you! \\(^_^)/\n");
    printf("=====================================\n");
}

void myFunction(int myNumbers[5]); 
int myFunctions(int x);

enum Level {
    LOW,    //0
    MEDIUM, //1
    HIGH    //2
  };

struct myStructure {
    int myNum;
    char myLetter;
    enum Level level;
};


int main() {
    int myAge = 24;
    int* ptr = &myAge;
    printf("Value: %d\n", myAge);
    printf("Addres: %p\n", &myAge);
    myAge=40;
    printf("Addres: %p\n", ptr);
    printf("Value: %d\n", *ptr);

    int myNumbers[5] = {25, 50, 75, 100, 102};
    for (int i =0; i < 4; i++) {
        printf("%d\n", myNumbers[i]);
        printf("%p\n", &myNumbers[i]);
    }

    // Get the memory address of the myNumbers array
    printf("%p\n", myNumbers);

    // Get the memory address of the first array element
    printf("%p\n", &myNumbers[0]);

    // Get the value of the first element in myNumbers
    printf("%d\n\n\n", *(myNumbers+1));

    printMyBio("Abhi Patel", 24);

    myFunction(myNumbers);

    printf("Result is: %d\n", myFunctions(3));

    struct myStructure s1;
    s1.myNum = 13;
    s1.myLetter = 'A';
    s1.level = HIGH;
    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);
    printf("My Enum: %d\n", s1.level);


    struct myStructure s2 = {10, 'B', MEDIUM};

    return 0;
}


void myFunction(int myNumbers[5]) {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", myNumbers[i]);
    }
}


int myFunctions(int x) {
    return 5 + x;
}
