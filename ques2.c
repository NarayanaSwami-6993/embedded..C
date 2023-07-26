#include <stdio.h>
#include <string.h>

typedef struct Student {
    char a[10];
    int b;
    double c;
} Student;

void generic_swap(void* ptr1, void* ptr2, size_t size) {
    unsigned char* p1 = (unsigned char*)ptr1;
    unsigned char* p2 = (unsigned char*)ptr2;

    for (size_t i = 0; i < size; i++) {
        unsigned char temp = p1[i];
        p1[i] = p2[i];
        p2[i] = temp;
    }
}

int main() {
    int i1 = 10, i2 = 20;
    float f1 = 1.6, f2 = 8.9;
    int a1[3] = {1, 2, 3}, a2[3] = {10, 20, 30};
    Student s1 = {"Adil", 42, 5.2}, s2 = {"Bilal", 9, 3};

    generic_swap(&i1, &i2, sizeof(int));
    printf("i1 = %d, i2 = %d\n", i1, i2);

    return 0;
}