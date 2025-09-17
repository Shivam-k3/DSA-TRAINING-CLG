#include <stdio.h>
int main()
{
    char str[100];
    int pos;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the position of the character to print (starting from 0): ");
    scanf("%d", &pos);
    printf("Character at position %d: %c\n", pos, str[pos]);

    return 0;
}