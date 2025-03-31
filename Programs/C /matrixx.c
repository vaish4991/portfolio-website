#include <stdio.h>
int main() {
    //intialise a 4*4 matrix
    int matrix[4][4] = {
        {1,2,3,4},
        {5,5,6,7},
        {8,7,6,6},
        {1,2,3,4}
    };
    //Access and print matrix elements
    for(int i=0;i<4; i++){
        for(int j = 0; j<4; j++) {
            printf("%d" , matrix[i][j]); //print element at row at row i and column j
        }
             printf("\n");
        }
    
    return 0;
        }
    
    
