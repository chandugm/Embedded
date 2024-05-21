#include <stdio.h>

int main() {
    unsigned int a = 0xaabbccdd;

    unsigned int aab = (a >> 16) & 0xfff0;
    printf("aab: %x\b \n", aab);

    unsigned int bccdd = a & 0xfffff;
    printf("bccdd: %05x\n", bccdd);

    return 0;
}

