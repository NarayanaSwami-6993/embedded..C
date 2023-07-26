#include <stdio.h>
unsigned char decimal_to_bcd(int decimal) {
    return (((decimal / 10) << 4) | (decimal % 10));
}

int main() {
    int decimalNumber = 45;
    unsigned char bcdNumber = decimal_to_bcd(decimalNumber);
    printf("Decimal: %d, BCD: 0x%02X\n", decimalNumber, bcdNumber);
    return 0;
}
