#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a = 4,b = 6, i;

    i = ++a * b++;
    printf("a = %d,b = %d, i = %d\n", a, b , i);
    return 0;
}
