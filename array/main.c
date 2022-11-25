#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, max;
    int x[100];
    x[0] = 10;
    x[99] = 2;
    printf("first element: %d\n", x[0]);
    printf("last element: %d\n", x[99]);
    x[1] = x[0] + x [99];
    printf("second element: %d\n", x[1]);


    return 0;
}
