#include <stdio.h>
#include <stdlib.h>

int main()
{
    double income, tax;
    printf("Enter your income: ");
    scanf("%lf", &income);
    if (income<10000)
        tax = 0.0;
    else if (income>10000 && income <20000)
        tax = income *.1;
    else if (income>20000 && income<50000)
         tax = income * .2;
    else {
        tax = income* .25;
        tax = tax + tax * 0.1;
    }
    printf("the payable tax is $ %0.2lf\n", tax);
    return 0;
}
