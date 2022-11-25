#include <stdio.h>
#include <stdlib.h>

int main()
{
     char str[80];

    printf("Enter your name: ");
    //scanf("%[A-Za-z ]", str);
    scanf("%[^\n]", str);
    //accept everything but if ^A as an example it will accept anything but A
    printf("Welcome, %s\n", str);

    return 0;
}
