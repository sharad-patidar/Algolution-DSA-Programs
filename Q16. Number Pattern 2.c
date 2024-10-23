/*
12345
23455
34555
45555
55555
*/
#include <stdio.h>
void printPattern() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j >= i) {
                printf("%d", j);
            }
        }
        for(int k=1;k<i;k++){
                printf("5");
            }
        printf("\n");
    }
}

int main() {
    printPattern();
    return 0;
}
