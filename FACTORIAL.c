#include <stdio.h>

int main() {
    int n = 7;
    unsigned long long factorial = 1;

    // Calculate factorial
    for(int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    // Display the result
    printf("Factorial of %d = %llu\n", n, factorial);

    return 0;
}
