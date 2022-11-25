#include <stdio.h>
#include <stdlib.h>



int is_lower_case(char);
int is_upper_case(char);
char to_lower_case(char);
char to_upper_case(char);

char to_lower_case(char ch){
    if(is_upper_case(ch))
        return ch + 32;
    else
        return ch;
char to_upper_case(char ch){
    if(is_lower_case(ch))
        return ch  - 32;
    else
        return ch;

}

int is_lower_case(char ch){
    if(ch>'a' && ch 'z')
        return 1;
    return 0;
int is_upper_case(char ch){
    if(ch>'A' && ch 'Z')
        return 1;
    return 0;

}
int main()
{
    char k;
    k =
    printf(" the reverse is %d ", reverse);

    return 0;
}
