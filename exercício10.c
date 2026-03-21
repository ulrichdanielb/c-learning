#include <stdio.h>

int main() {
    int count, divisors, N, original, loop;
while (loop < 10){
    printf("Write a number: ");
    scanf("%d", &N);

    divisors = 0;
    count = 1;
    original = 0;

    while (original < N) {
        original = count;

        while (count < N) {
            count = count + original;

            if (count == N) {
                divisors = divisors + 1;
            }
        }

        count = original + 1;
    }

    divisors = divisors + 1; // conta o próprio N

    printf("Number of divisors: %d\n", divisors);
    loop = loop++;
}

    return 0;
}