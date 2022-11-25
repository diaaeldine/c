#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char first[80] = "Chocolate";
    char second[80]= "Candy";
    //strcpy(second, first);
    //printf("the copied string: %s\n", second);
    //strcat(first, second); // no cause no space
    strcat(first," ");
    strcat(first, second);
    printf("the first array contains: %s\n", first);
    return 0;
}
