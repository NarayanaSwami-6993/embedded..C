#include <stdio.h>

void set_bit(unsigned char* number, int bit) {
    *number |= (1 << bit);
}

void clear_bit(unsigned char* number, int bit) {
    *number &= ~(1 << bit);
}

void toggle_bit(unsigned char* number, int bit) {
    *number ^= (1 << bit);
}

int main() {
    unsigned char number = 0x55;

    set_bit(&number, 2);
    printf("After setting bit 2: 0x%02X\n", number);

    clear_bit(&number, 5);
    printf("After clearing bit 5: 0x%02X\n", number);

    toggle_bit(&number, 3);
    printf("After toggling bit 3: 0x%02X\n", number);

    return 0;
}
