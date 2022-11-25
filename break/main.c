#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;
    char response;
    for(count=1; count<=100; count++){
        printf("count = %d\n", count);
        printf("Print next? y/Y to continue, any other key will terminate: ");
        scanf(" %c", &response);
        if (response != 'y' && response != 'Y')
            break; //line 14
    }
    printf("terminated at count = %d\n", count);
    return 0;
}
