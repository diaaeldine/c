#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, sum;
    sum = 0;
    printf("Enter a positive number, negative to terminate: ");
    scanf("%d", &number);

    while(number>=0){
        sum += number;
        printf("Enter a positive number, negative to terminate: ");
        scanf("%d", &number);

    }
    printf("Sum of the numbers: %d", sum);
    return 0;
}
