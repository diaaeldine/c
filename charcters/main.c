#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch = 'A';
    printf("Character is %c\n", ch);
    printf ("Enter a character: ");
    char another;
    //scanf("%c", &another);
    another = getchar();
    printf ("You have typed: %c", another);
    return 0;
}
