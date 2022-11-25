#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char first[80] = "zebra";
    char second[80] = "cat";

    int i;
    i = strcmp(first, second);
    if (i==0){
        printf("both are exactly equal\n");

    }
    else if (i<0)
        printf("%s comes first\n", first);
    else
        printf("%s comes first\n", second);

    return 0;
}
