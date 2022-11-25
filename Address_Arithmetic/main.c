#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    int *p;
    p = &x;

    printf("content of p: %lu\n", p);
    p = p+5; // we add 4 cause it a address with 4 bytes
    printf("content of p: %lu\n", p);
    return 0;
}
