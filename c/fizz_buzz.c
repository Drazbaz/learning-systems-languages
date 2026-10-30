#include <stdio.h>

/* Write a program that prints 1-100:
 * - multiples of 3 → Fizz
 * - multiples of 5 → Buzz
 * - multiples of both → FizzBuzz
 */

int main(void) {
    for(int i = 1; i <= 100; i++) {
        if (i % 3 != 0 && i % 5 != 0) {
            printf("%d", i);
        } else {
            if (i % 3 == 0) {
                printf("Fizz");
            }
            if (i % 5 == 0) {
                printf("Buzz");
            }
        }
        printf("\n");
    }
}
