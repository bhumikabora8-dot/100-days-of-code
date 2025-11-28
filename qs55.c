#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    int i = 2;
    while (i * i <= num) {
        if (num % i == 0) {
            return 0;
        }
        i++;
    }
    return 1;
}

int main() {
    int n, i = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);
    while (i <= n) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
    return 0;
}