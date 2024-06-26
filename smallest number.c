#include <stdio.h>

int main() {
    // Initialize the set of integers
    int numbers[] = {18, 45, 66, 23, 19, 10, 52, 71};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    int smallest = numbers[0];

    // Iterate through the array to find the smallest number
    for (int i = 1; i < n; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    // Print the smallest number
    printf("The smallest number in the given set is: %d\n", smallest);

    return 0;
}
