#include <stdio.h>
#include <stdlib.h>

int main()
{
    double *p = (double *)10000;
    double *q = (double *)2000;
    printf("%d\n", p-q);
    return 0;
}
