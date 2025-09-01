#include <stdio.h>

int main() {
    int num, original, remainder, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    while (original != 0) {
        remainder = original % 10;
        result += remainder * remainder * remainder;
        original /= 10;
    }


    if (result == num)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong Number\n");

    return 0;
}