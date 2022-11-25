#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

for(i = 1; i <= 10; ++i){

     if (i % 2 == 0)

         break;

      else

        continue;

}

printf("i = %d\n", i);
    return 0;
}
