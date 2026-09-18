#include <stdio.h>

int main() {
    int a = 5; // Binary: 0101
    int b = 3; // Binary: 0011

    printf("AND (&): %d\n", a & b); 
    printf("XOR (^): %d\n", a ^ b); 
    printf("NOT (~): %d\n", ~a);     /
    printf("Left Shift  (5 << 1): %d\n", a << 1); // Output: 10 (multiplies by 2)
    printf("Right Shift (5 >> 1): %d\n", a >> 1); // Output: 2  (divides by 2)

    return 0;
}
