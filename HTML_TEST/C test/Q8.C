#include <stdio.h>

int main() {
    int num1, num2, select;

    do {
        printf("Enter the first number: ");
        scanf("%d", &num1);

        printf("Enter the second number: ");
        scanf("%d", &num2);

        printf("Select an operator:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        scanf("%d", &select);

        if (select == 1) {
            printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
        } 
        else if (select == 2) {
            printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
        } 
        else if (select == 3) {
            printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
        } 
        else if (select == 4) {
            if (num2 != 0) {
                printf("Result: %d / %d = %d\n", num1, num2, num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
        } 
        else if (select == 5) {
            printf("Exiting the calculator.\n");
        } 
        else {
            printf("Invalid select. Please try again.\n");
        }

    } while (select != 5);

    return 0;
}