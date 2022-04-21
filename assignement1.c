#include <stdio.h>
int main()
{
    float p,r,t,a;
    printf("Please enter the Principal amount: ");
    scanf("%f",&p);
    printf("Please enter the rate of Interest: ");
    scanf("%f",&r);
    printf("Please enter the Time preriod: ");
    scanf("%f",&t);
    a=(p*r*t)/100;
    printf("the simple intrest is %f.",a);
    return 0;
}