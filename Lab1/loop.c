#include <stdio.h>

int main(void) {
    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 5; col++) {
            if (row == 2 && col == 2) {
                printf("      ");
            } else {
                printf("(%d,%d) ", row, col );
            }
        }
    printf("\n");
    }
    return 0;
}