#include <stdio.h>
#include <math.h>

// Function to convert binary to decimal
int binaryToDecimal(long long binaryNumber) {
    int decimalNumber = 0, i = 0, remainder;
    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }
    return decimalNumber;
}

// Function to convert decimal to octal
void decimalToOctal(int decimalNumber) {
    int octalNumber[100], i = 0;
    
    while (decimalNumber != 0) {
        octalNumber[i] = decimalNumber % 8;
        decimalNumber /= 8;
        ++i;
    }
    
    // Printing octal number in reverse order
    printf("Octal number: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octalNumber[j]);
    }
    printf("\n");
}

int main() {
    long long binaryNumber;
    
    // Prompt the user to enter a binary number
    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);
    
    // Convert binary to decimal
    int decimalNumber = binaryToDecimal(binaryNumber);
    
    // Convert decimal to octal and print the result
    decimalToOctal(decimalNumber);
    
    return 0;
}
