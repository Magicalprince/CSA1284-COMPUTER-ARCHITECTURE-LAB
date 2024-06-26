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

// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int decimalNumber) {
    char hexNumber[100];
    int i = 0;

    while (decimalNumber != 0) {
        int temp = decimalNumber % 16;

        if (temp < 10) {
            hexNumber[i] = temp + 48; // ASCII value of '0' is 48
        } else {
            hexNumber[i] = temp + 55; // ASCII value of 'A' is 65, 65 - 10 = 55
        }

        i++;
        decimalNumber = decimalNumber / 16;
    }

    // Print the hexadecimal number in reverse order
    printf("Hexadecimal number: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexNumber[j]);
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

    // Convert decimal to hexadecimal and print the result
    decimalToHexadecimal(decimalNumber);

    return 0;
}
