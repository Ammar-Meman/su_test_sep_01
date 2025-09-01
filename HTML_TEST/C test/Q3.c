#include <stdio.h>

int main() {
    int a, b, c, d, e;
    printf("Enter marks for five subjects: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int total = a + b + c + d + e;
    float percentage = (total / 500.0) * 100;

    printf("Percentage = %.0f%%\n", percentage);

    if (percentage >= 90) {
        printf("Grade A+\n");
    } else if (percentage >= 80) {
        printf("Grade A\n");
    } else if (percentage >= 70) {
        printf("Grade B\n");
    } else if (percentage >= 60) {
        printf("Grade C\n");
    } else if (percentage >= 50) {
        printf("Grade D\n");
    } else if (percentage >= 40) {
        printf("Grade E\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}