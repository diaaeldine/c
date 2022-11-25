#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char str[80];

    strcpy(str, "Hello World");

    printf("message is: %s\n", str);

    char str1[] = "Hello candy";
    strcpy(str, str1);
    printf("message is: %s\n", str);

    return 0;
}
