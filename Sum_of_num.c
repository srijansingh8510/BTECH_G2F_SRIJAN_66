#include <stdio.h>

int main() {
    int n;
    long long sum = 0; 

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum of numbers up to %d = %lld\n", n, sum);
    return 0;
}