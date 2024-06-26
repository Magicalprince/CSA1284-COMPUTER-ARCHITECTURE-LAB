#include <stdio.h>

int main() {
    int decimalNumber;
    
    // Prompt the user to enter a decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    
    // Array to store hexadecimal number
    char hexNumber[100];
    int i = 0;
    
    // Loop to convert decimal to hexadecimal
    while (decimalNumber != 0) {
        int temp = decimalNumber % 16;
        
        // Convert integer to character
        if (temp < 10) {
            hexNumber[i] = temp + 48;  // ASCII value of '0' is 48
        } else {
            hexNumber[i] = temp + 55;  // ASCII value of 'A' is 65, 65 - 10 = 55
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
    
    return 0;
}
