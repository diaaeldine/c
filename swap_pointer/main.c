#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
 int temp;
 temp = *a;
 *a = *b;
 *b = temp;
}
int main()
{
    int x =100, y =200;
    swap(&x, &y);
    printf("x= %d, y =%d\n", x, y);
    return 0;
}
