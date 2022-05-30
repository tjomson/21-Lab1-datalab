#include <stdio.h>

int main(int argc, char *argv[]) {

    unsigned int min = 1 << 31;
    printf("min: %d\n", min);
    int lmao = min >> 31;
    printf("lmao: %x\n", lmao);

    return 0;
}

int copyMSB(int x) {
    return x >> 31;
}