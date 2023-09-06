#include <stdio.h>

int main() {
    int row, col, numStars;
    
    for (row = 1; row <= 9; row++) {
       
        if (row <= 3) {
            numStars = 2 * row - 1;
        } else if (row == 4 || row == 5 || row == 6) {
            numStars = 2 * (row - 3) - 1;
        } else {
            numStars = 2 * (row - 7) - 1;
        }
        
        int numSpaces = (11 - numStars) / 2;
        
        for (col = 1; col <= numSpaces; col++) {
            printf(" ");
        }
        
        for (col = 1; col <= numStars; col++) {
            printf("*");
        }
        
        for (col = numSpaces + numStars; col <= 11; col++) {
            printf(" ");
        }
        
        printf("\n");
    }

    return 0;
}

