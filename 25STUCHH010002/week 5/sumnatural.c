#include <stdio.h>

void main() {
    
    int sum = 0;
    for (int i = 1; i <= 100; ++i) {
        sum += i;
    }

    printf("Sum of natural numbers up to 100 = %d\n", sum);
}