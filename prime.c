#include <stdio.h>
#include <math.h>

int main(void)
{
    int limit, n, i;
    printf("Enter the limit of numbers: ");
    if (scanf("%d", &limit) != 1) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    printf("Prime numbers up to %d are:\n", limit);
    for (n = 2; n <= limit; n++) {
        int isPrime = 1; /* assume prime */
        int maxDiv = (int) sqrt(n);
        for (i = 2; i <= maxDiv; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d\n", n);
        }
    }
    printf("\n");
    return 0;
}