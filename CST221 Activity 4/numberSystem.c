#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to convert decimal to binary
void decimalToBinary(int n) {
    // Size of an integer is assumed to be 32 bits
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}

// Function to convert hexadecimal to binary
void hexToBinary(char hex[]) {
    char *binary;
    int i = 0;

    // Allocate memory for binary representation
    binary = (char *)malloc(4 * strlen(hex) + 1);

    // Convert each hexadecimal digit to binary
    while (hex[i]) {
        switch (hex[i]) {
            case '0':
                strcat(binary, "0000");
                break;
            case '1':
                strcat(binary, "0001");
                break;
            case '2':
                strcat(binary, "0010");
                break;
            case '3':
                strcat(binary, "0011");
                break;
            case '4':
                strcat(binary, "0100");
                break;
            case '5':
                strcat(binary, "0101");
                break;
            case '6':
                strcat(binary, "0110");
                break;
            case '7':
                strcat(binary, "0111");
                break;
            case '8':
                strcat(binary, "1000");
                break;
            case '9':
                strcat(binary, "1001");
                break;
            case 'A':
            case 'a':
                strcat(binary, "1010");
                break;
            case 'B':
            case 'b':
                strcat(binary, "1011");
                break;
            case 'C':
            case 'c':
                strcat(binary, "1100");
                break;
            case 'D':
            case 'd':
                strcat(binary, "1101");
                break;
            case 'E':
            case 'e':
                strcat(binary, "1110");
                break;
            case 'F':
            case 'f':
                strcat(binary, "1111");
                break;
            default:
                printf("Invalid hexadecimal digit %c", hex[i]);
                return;
        }
        i++;
    }
    printf("%s\n", binary);
    free(binary);
}

// Function to convert binary to hexadecimal
void binaryToHex(int n) {
    char hex[32];

    // Convert integer to hexadecimal string
    sprintf(hex, "%X", n);
    printf("%s\n", hex);
}

// Function to perform bitwise AND operation
void bitwiseAND(int a, int b) {
    printf("%d & %d = %d\n", a, b, a & b);
}

// Function to perform bitwise OR operation
void bitwiseOR(int a, int b) {
    printf("%d | %d = %d\n", a, b, a | b);
}

// Function to perform bitwise XOR operation
void bitwiseXOR(int a, int b) {
    printf("%d ^ %d = %d\n", a, b, a ^ b);
}

// Function to perform bitwise complement operation
void bitwiseComplement(int a) {
    printf("~%d = %d\n", a, ~a);
}

// Function to perform left shift operation
void leftShift(int a, int shift) {
    printf("%d << %d = %d\n", a, shift, a << shift);
}

// Function to perform right shift operation
void rightShift(int a, int shift) {
    printf("%d >> %d = %d\n", a, shift, a >> shift);
}

int main() {
    int number1, number2, shift;

    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);

    // Perform bitwise AND operation
    bitwiseAND(number1, number2);

    // Perform bitwise OR operation
    bitwiseOR(number1, number2);

    // Perform bitwise XOR operation
    bitwiseXOR(number1, number2);

    // Perform bitwise complement operation
    bitwiseComplement(number1);

    // Perform left shift operation
    printf("Enter a number and the number of bits to shift left: ");
    scanf("%d %d", &number1, &shift);
    leftShift(number1, shift);

    // Perform right shift operation
    printf("Enter a number and the number of bits to shift right: ");
    scanf("%d %d", &number1, &shift);
    rightShift(number1, shift);

    return 0;
}
