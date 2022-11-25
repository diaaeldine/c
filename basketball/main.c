#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);
    if (abs(x-y)<3)
        printf("Yes\n");
    else
    printf("No\n");
    return 0;
}
