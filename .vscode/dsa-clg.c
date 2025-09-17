#include<stdio.h>
int main()
{
    int i, a;
    int sum = 0;
    printf("Enter the value: ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        sum = sum + i;
    }
    printf("\nSum is %d\n", sum); 
    return 0;
}