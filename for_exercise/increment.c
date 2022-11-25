
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    for(i=1, j=2;j<10;--i,j+=2)
        printf("%d\t %d\n",i,j);
    return 0;
}
