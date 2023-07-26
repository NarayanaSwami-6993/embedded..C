#include <stdio.h>
#include <string.h>

void removeDuplicateChar(char* str, char c) {
    int len = strlen(str);
    int writeIndex = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] != c || (i > 0 && str[i - 1] != c)) {
            str[writeIndex++] = str[i];
        }
    }

    str[writeIndex] = '\0';
}

int main() {
    char s1[] = "Hello";
    char s2[] = "Hello World";
    char c = 'l';

    printf("Before removing '%c' from '%s': %s\n", c, s1, s1);
    removeDuplicateChar(s1, c);
    printf("After removing '%c': %s\n\n", c, s1);

    printf("Before removing '%c' from '%s': %s\n", c, s2, s2);
    removeDuplicateChar(s2, c);
    printf("After removing '%c': %s\n", c, s2);

    return 0;
}
