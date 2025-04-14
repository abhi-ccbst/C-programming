#include <stdio.h>
#include <stdbool.h>


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
    return 0;
}