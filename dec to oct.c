#include <stdio.h>

// Function to convert decimal to octal
void decimal_to_octal(int n) {
    int octal[32];
    int i = 0;

    // Edge case for 0
    if (n == 0) {
        printf("0");
        return;
    }

    // Converting decimal to octal
    while (n != 0) {
        octal[i] = n % 8;
        n = n / 8;
        i++;
    }

    // Printing the octal number in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
}

int main() {
    int decimal_number;

    // Input from user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal_number);

    // Convert decimal to octal and print
    printf("The octal equivalent of %d is ", decimal_number);
    decimal_to_octal(decimal_number);
    printf("\n");

    return 0;
}
