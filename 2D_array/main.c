#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[4][3];
    int i, j;
    for(i=0;i<4;i++){  //iterate over the rows i is acting row index 0 i=0
        for(j=0;j<3;j++){ // iterate over the columns
            x[i][j] = i * j;
        }
    }
        printf("content of the  2 D array: ");
        for(i=0;i<4;i++){
            for(j=0;j<3;j++){
              printf("%4d", x[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
