#include <stdio.h>
#include <stdlib.h>
const MAX = 20;
int main()
{
    float X[MAX], Y[MAX];
    int count = 0;
    float temp;

    printf("Enter maximum %d numbers, terminate with 0.0\n", MAX);
    printf("First number: ");
    scanf("%f", &temp);

    // do as long as count < MAX and the last input is not 0.0
    while(count < MAX && temp != 0.0){
        // the last input was not a zero and we still have
        // rooms in the array
        X[count++] = temp;
        printf("Next: ");
        scanf("%f", &temp);
    }
    printf("\n");
    printf("There are in total %d numbers given as input\n\n", count);
    int index;
    for(index = 0; index < count; ++index){
        if (index % 2 == 0){
            Y[index] = 2 * X[index];
        }
        else{
            Y[index] = cbrt(X[index]);
        }
    }
    // printing into the console
    printf("%12s %12s\n\n", "Input Array", "2nd Array");
    float firstSum = 0.0, secondSum = 0.0;
    for(index = 0; index < count; ++index){
        printf("%12.5f %12.5f\n", X[index], Y[index]);
        firstSum += X[index];
        secondSum += Y[index];
    }
    printf("\n\n");
    printf("Sum of the first array: %12.5f\n", firstSum);
    printf("Sum of the second array: %12.5f\n", secondSum);

    return 0;
}
