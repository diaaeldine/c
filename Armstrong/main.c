#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getTotalDigits(int);
int isArmstrong(int);


//function to count the digits
int getTotalDigits(int n){
    int count = 0;

    while(n>0){
        n = n/10;
        count++;
    }
    return count;
}

int isArmstrong(int n){
    int sum = 0;
    int count = getTotalDigits(n);
    int temp = n;

    while(n>0){
     sum = sum + pow(n % 10, count);
     n= n/10;
    }
    return temp == sum;
}

int main()
{
    int i;
    for (i=1; i<=50000; i++){
        if(isArmstrong(i))
            printf("%d is Armstrong\n", i);
    }

    return 0;

}
