#include <stdio.h>
#include <stdlib.h>
// input a string and count no of alphabets and spaces in the string
int main()
{
    //Hello 123! this is test
    char str[80];//declare a character array
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    //[A-Za-z ]
    //declare a loop counter
    int i, countAlpha = 0, countSpace = 0;
    for(i=0;str[i]!='\0';i++){
        if ((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
            countAlpha++;
        else if(str[i] == ' ')
         countSpace++;

    }
    printf("Total alpha character is : %d\n", countAlpha);
    printf("Total spaces characters found: %d\n", countSpace);

    return 0;
}
