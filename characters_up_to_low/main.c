#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter an Alphabetic Number: ");
    scanf("%c", &ch);

    if (ch>= 'A' && ch <='Z'){
        ch = ch +32;
        printf("The  corresponding Lower case is %c\n", ch);
    }
    else if(ch>= 'a' && ch <='z'){
        ch = ch -32;
        printf("The  corresponding upper case is %c\n", ch);
    }
    else{
        printf("The given character is not alphabetic");
    }
    return 0;
}
