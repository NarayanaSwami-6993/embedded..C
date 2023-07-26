#include <stdio.h>

#define SET_BIT(number, bit) ((number) |= (1 << (bit)))
#define CLEAR_BIT(number, bit) ((number) &= ~(1 << (bit)))
#define TOGGLE_BIT(number, bit) ((number) ^= (1 << (bit)))

int main() {
    unsigned char number = 0x55;

    SET_BIT(number, 2);
    printf("After setting bit 2: 0x%02X\n", number);

    CLEAR_BIT(number, 5);
    printf("After clearing bit 5: 0x%02X\n", number);

    TOGGLE_BIT(number, 3);
    printf("After toggling bit 3: 0x%02X\n", number);

    return 0;
}