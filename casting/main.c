#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, b = 2;
    float r;
    //r = a / b; wahda kefaya cause char > int > long > float > double
    r = (float)a / b;
    printf("r = %f\n", r);


    return 0;
}
