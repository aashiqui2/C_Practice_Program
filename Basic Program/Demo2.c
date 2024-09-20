/* #include <stdio.h>

void printBinary(int n) {
    // Handle negative numbers using two's complement
    unsigned int mask = 1 << 7;  // Start with the most significant bit for 8 bits

    for (int i = 0; i < 8; i++) {
        if (n & mask) {
            printf("1");
        } else {
            printf("0");
        }
        mask >>= 1;  // Shift the mask one position to the right
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a decimal number (-128 to 127): ");
    scanf("%d", &n);

    // Ensure input is within 8-bit signed integer range
    if (n < -128 || n > 127) {
        printf("Please enter a number within the range of -128 to 127.\n");
        return 1;
    }

    printf("Binary representation (8-bit): ");
    printBinary(n);
    return 0;
}
 */

/* #include <stdio.h>

void printBinary(int n) {
    unsigned int mask = 1 << (sizeof(n) * 8 - 1); // Create a mask for the most significant bit

    // Iterate over all bits
    for (int i = 0; i < sizeof(n) * 8; i++) {
        if (n & mask) {
            printf("1");
        } else {
            printf("0");
        }
        mask >>= 1;  // Shift the mask one position to the right
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("Binary representation: ");
    printBinary(n);
    return 0;
} */

/* #include <stdio.h>

unsigned int decimalToBinary(int n) {
    unsigned int binary = 0;
    unsigned int place = 1;  // Tracks the place value

    // Handle negative numbers by converting to unsigned
    if (n < 0) {
        n = ~n + 1; // Convert to two's complement
    }

    // Convert to binary
    while (n > 0) {
        int remainder = n % 2;
        binary += remainder * place;
        n /= 2;
        place *= 10;
    }

    return binary;
}

int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    unsigned int binaryRepresentation = decimalToBinary(n);
    printf("Binary representation as an integer: %u\n", binaryRepresentation);
    return 0;
}
 */
