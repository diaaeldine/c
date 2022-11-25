#include <stdio.h>
#include <stdlib.h>

int main()
{
    // allocate array
    int n;
    printf("Enter array size: " );
    scanf("%d", &n);

    int x[n];
    int i;
    for (i=0;i<n;i++){
        printf("Enter element to index %d: ", i);
        scanf("%d", &x[i]);
    }
    printf("content of array: \n");
    for (i=0;i<n;i++){
        printf("x[%d] = %d\n", i, x[i]);
    }


    return 0;
}
