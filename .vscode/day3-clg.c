
#include<stdio.h>

float simple_interest(float p, float r, float t)
{
    return (p * r * t) / 100;
}

int main()
{
    float principal, rate, time, si;

    // Take input from user
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);
    si = simple_interest(principal, rate, time);
    printf("Simple Interest = %.2f\n", si);

    return 0;
}