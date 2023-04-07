#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Check if the number of arguments is exactly 2
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    // Parse the input argument
    int cents = atoi(argv[1]);

    // Check if the input is negative
    if (cents < 0) {
        printf("0\n");
        return 0;
    }

    // Compute the minimum number of coins needed
    int coins = 0;
    while (cents > 0) {
        if (cents >= 25) {
            cents -= 25;
            coins++;
        } else if (cents >= 10) {
            cents -= 10;
            coins++;
        } else if (cents >= 5) {
            cents -= 5;
            coins++;
        } else if (cents >= 2) {
            cents -= 2;
            coins++;
        } else {
            cents--;
            coins++;
        }
    }

    // Print the result
    printf("%d\n", coins);

    return 0;
}

