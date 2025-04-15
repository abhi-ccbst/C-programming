#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    const int minutesPerHour = 60;
    int sum1 = 100 + 50;        // 150 (100 + 50)
    int sum2 = sum1 + 250;      // 400 (150 + 250)
    int sum3 = sum2 + sum2;     // 800 (400 + 400)
    bool test = false;
    
    printf("%d", test);

    if (test) {
        printf("The value of test is true ");
    } else if(!test) {
        printf("The value of test is false\n");
    }

    int day = 10;

    switch (day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        default:
            printf("Sunday\n");
            break;
    }

    int i = 0;
    while (i < 5) {
        printf("%d\n", i);
        i++;
    }
    
    i = 0;
    do {
        if (i == 3) {
            i++;
            continue;
        }
        printf("%d\n", i);
        i++;
    } while (i < 5);

    for (i = 0; i < 5; i++) {
        if (i == 4) {
            break;
        }
        printf("%d\n", i);
    }
    int myNumbers[] = {25, 50, 100, 102};
    printf("%d", sizeof(myNumbers)/sizeof(myNumbers[0]));   //4 bytes * 4  /4 bytes
    for (i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++) {
        if (i == 2) {
            myNumbers[i] = 21;
        }
        printf("%d\n", myNumbers[i]);
    }


    // char greeting[] = "Hello World!";
    char greeting[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s\n", greeting);

    // int length = strlen(greeting);
    // printf("Length: %d\n", length);

    for (i = 0; i < strlen(greeting); i++) {
        printf("%c\n", greeting[i]);
    }

    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hi";
    
    // strcat(str1, str2); // str1 = str1 + str2
    printf("%s", str1);
    printf("%d\n", strcmp(str1, str2)); 
    printf("%d\n", strcmp(str1, str3));

    int myNum;
    char myChar;

    printf("Type a number AND a character and press enter: \n");

    scanf("%d %c", &myNum, &myChar);

    printf("Your number is: %d\n", myNum);

    printf("Your character is: %c\n", myChar);

    return 0;
}