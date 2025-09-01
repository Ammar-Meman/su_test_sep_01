#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int count = 0;

    printf("Enter numbers 0 to stop:\n");

    while (1) {
        scanf("%d", &num);
        if (num == 0)
            break;
        sum += num;
        count++;
    }

    
    return 0;

}