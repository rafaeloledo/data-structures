#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    int num1[2];
    int num = 0;
    num1[0] = 1;
    num1[1] = 4;
    num += num1[0] * 10;
    num += num1[1];
    printf("%d\n", num);





    return 0;
}