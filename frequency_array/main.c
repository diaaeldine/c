#include <stdio.h>
#include <stdlib.h>

int main()
{
    int freq[10]={};
    freq[5]++; //add 5 index five became 1
    freq[3]++; //add 3
    freq[5]++; //index 5 became 2
    freq[5]--;
    printf("%d\n", freq[5]);
    return 0;
}
