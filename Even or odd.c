#include <stdio.h>

int isEven(int n) {
    return n % 2 == 0;
}

int main() {
    if(isEven(8))
        printf("Even");
    else
        printf("Odd");

    return 0;
}
