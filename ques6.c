#include <stdio.h>
#include <stdint.h>

volatile uint8_t INTCON __at(0x0B);

#define GIE 7
#define INTF0IF 1

#define SET_BIT(reg, bit) ((reg) |= (1 << (bit)))
#define CLEAR_BIT(reg, bit) ((reg) &= ~(1 << (bit)))
#define TOGGLE_BIT(reg, bit) ((reg) ^= (1 << (bit)))
#define IS_BIT_SET(reg, bit) ((reg) & (1 << (bit)))

int main() {
    INTCON = 0x00;
    INTCON = 0x82;

    SET_BIT(INTCON, GIE);
    SET_BIT(INTCON, INTF0IF);

    if (IS_BIT_SET(INTCON, INTF0IF)) {
        printf("INTF0IF is set!\n");
    } else {
        printf("INTF0IF is not set!\n");
    }

    CLEAR_BIT(INTCON, GIE);

    if (IS_BIT_SET(INTCON, GIE)) {
        printf("GIE is set!\n");
    } else {
        printf("GIE is not set!\n");
    }

    return 0;
}