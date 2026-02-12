#include <stdio.h>
#include <math.h>

int main() {
    // 5. Leap Year
    int year;
    printf("Enter any year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is not a Leap Year.\n", year);
    }

    // 6. Divisible by 5
    int num;
    printf("\nEnter any integer to check divisibility by 5: ");
    scanf("%d", &num);
    if (num % 5 == 0) {
        printf("%d is divisible by 5.\n", num);
    } else {
        printf("%d is not divisible by 5.\n", num);
    }

    // 7. Divisible by 7
    printf("\nEnter any integer to check divisibility by 7: ");
    scanf("%d", &num);
    if (num % 7 == 0) {
        printf("%d is divisible by 7.\n", num);
    } else {
        printf("%d is not divisible by 7.\n", num);
    }

    // 8. Armstrong Number (3-digit)
    int d1, d2, d3, result;
    printf("\nEnter a 3-digit number: ");
    scanf("%d", &num);
    d1 = num / 100;
    d2 = (num / 10) % 10;
    d3 = num % 10;
    result = (d1 * d1 * d1) + (d2 * d2 * d2) + (d3 * d3 * d3);
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    // 9. Valid Triangle
    int a1, a2, a3;
    printf("\nEnter three sides of the triangle: ");
    scanf("%d %d %d", &a1, &a2, &a3);
    if ((a1 + a2 > a3) && (a2 + a3 > a1) && (a1 + a3 > a2)) {
        printf("It is a valid triangle.\n");
    } else {
        printf("Not a valid triangle.\n");
    }

    return 0;
}
