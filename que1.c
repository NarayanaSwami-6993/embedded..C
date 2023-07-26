#include <stdio.h>

unsigned int fitNumberIntoPosition(unsigned int X, unsigned int N, unsigned int P) {
    unsigned int mask = ~(1u << P);
    X &= mask;
    X |= (N << P);
    return X;
}

int main() {
    unsigned int X, N, P;
    printf("Enter the value for X (32-bit variable): ");
    scanf("%u", &X);
    printf("Enter the value for N (number to fit into X): ");
    scanf("%u", &N);
    printf("Enter the position P: ");
    scanf("%u", &P);

    unsigned int result = fitNumberIntoPosition(X, N, P);

    printf("Result: %08x\n", result);

    return 0;
}