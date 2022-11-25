#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    switch(age){ // no float or double in the switch
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19: printf("Teen Age!\n");
             break;
    default: printf("Not Teen Age!\n");
    }
    return 0;
}
