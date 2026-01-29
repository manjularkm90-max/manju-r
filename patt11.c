#include <stdio.h>
int main() {
    int i, j;
    int num = 1;
    for(i = 1; num <= 15; i++) {
        for(j = 1; j <= i; j++) {
            if(num <= 15) {
                printf("%d ", num);
                num++;
            }
        }
        printf("\n");
    }
}
