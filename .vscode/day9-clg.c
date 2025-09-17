#include <stdio.h>

int main() {
    float principal, rate, time, si;
    float *p, *r, *t;
    
    p = &principal;
    r = &rate;
    t = &time;

    printf("Enter principal amount: ");
    scanf("%f", p);

    printf("Enter rate of interest: ");
    scanf("%f", r);

    printf("Enter time (in years): ");
    scanf("%f", t);

    si = (*p) * (*r) * (*t) / 100;

    printf("Simple Interest = %.2f\n", si);

    return 0;
}  