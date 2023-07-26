#include <stdio.h>
#define DECIMAL_TO_BCD(decimal) (((decimal / 10) << 4) | (decimal % 10))

int main() {
    int decimalNumber = 45;
    unsigned char bcdNumber = DECIMAL_TO_BCD(decimalNumber);
    printf("Decimal: %d, BCD: 0x%02X\n", decimalNumber, bcdNumber);
    return 0;
}