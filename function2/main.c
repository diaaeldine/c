#include <stdio.h>
#include <stdlib.h>
// prototype declaration

int is_lower_case(char);
int is_upper_case(char);
char to_upper_case(char);
char to_lower_case(char);

char to_lower_case(char ch){
    if(is_upper_case(ch))
       return ch + 32;
    else
        return ch;
}
char to_upper_case(char ch){
    if(is_lower_case(ch))
       return ch - 32;
    else
        return ch;

}

int is_lower_case(char ch){
    if(ch>='a' && ch<='z')
        return 1;
    else
        return 0;
}
    int is_upper_case(char ch){
    if(ch>='A' && ch<='Z')
        return 1;
    else
        return 0;
}


int main()
{
    char k;

    k = 'A';
    k = to_lower_case(k);
    printf("lower case equiavalent: %c\n", k);

    k = 'q';
    k = to_upper_case(k);
    printf("upper case equiavalent: %c\n", k);
    return 0;

}
