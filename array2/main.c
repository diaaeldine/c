#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[100], i;
    for(i=0;i<100;i++){
        x[i] = i+1;
    }
    printf("content of the array is: ");
    for (i=0;i<100;i++){
        printf("%d, ", x[i]);
    }
    return 0;
}
