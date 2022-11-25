#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, t;
    scanf("%d", &t);
    //scanf("%d", &a);
    //scanf("%d", &b)
    while(t--){
        scanf("%d%d", &a, &b);
        if (a%b==0){
            printf("%d\n", 0);
        }
        else
            printf("%d\n", b-(a%b));

    }

    return 0;
}
