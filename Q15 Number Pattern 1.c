/*
11111
10001
10001
10001
11111
*/
#include <stdio.h>
void printPattern() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || i == 5 || j == 1 || j == 5) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }
}

int main() {
    printPattern();
    return 0;
}
