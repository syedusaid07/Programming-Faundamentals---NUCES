
#include <stdio.h>
int main() {

    unsigned int gate1, gate2, gate3, pub_constant;
    unsigned int num, key1, key2, key3;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    gate1 = num >> 24;
    gate2 = (num >> 16) & 255;
    gate3 = (num >> 8) & 255;
    pub_constant = num & 255;

    key1 = gate1 ^ pub_constant;
    key2 = gate2 ^ pub_constant;
    key3 = gate3 ^ pub_constant;

    printf("\nGate 1: ");
    for (int i = 7; i >= 0; i--)
        printf("%u", (gate1 >> i) & 1);

    printf("\nGate 2: ");
    for (int i = 7; i >= 0; i--)
        printf("%u", (gate2 >> i) & 1);

    printf("\nGate 3: ");
    for (int i = 7; i >= 0; i--)
        printf("%u", (gate3 >> i) & 1);

    printf("\nConstant: ");
    for (int i = 7; i >= 0; i--)
        printf("%u", (pub_constant >> i) & 1);

    printf("\n\nQuantum Key: ");

    for (int i = 7; i >= 0; i--)
        printf("%u", (key1 >> i) & 1);

    for (int i = 7; i >= 0; i--)
        printf("%u", (key2 >> i) & 1);

    for (int i = 7; i >= 0; i--)
        printf("%u", (key3 >> i) & 1);

    printf("\n");

    return 0;
}
