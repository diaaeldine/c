#include <stdio.h>
#include <stdlib.h>

    getSimpleInterest(double principale, double rate, double time){
        double interest;
        interest = (principale * rate * time)/100.0;
        return interest;

    }
int main()
{
    double p, r, t, i;
    printf("Enter principal: ");
    scanf("%lf", &p);
    printf("Enter rate: ");
    scanf("%lf", &r);
    printf("Enter duration: ");
    scanf("%lf", &t);

    i = getSimpleInterest(p,r,t);
    printf("Total interest: $%0.2lf\n", i);
    i = getSimpleInterest(1000.0, 5.0, 2);
    printf("Total interest: $%0.2lf\n", i);
    return 0;
}
