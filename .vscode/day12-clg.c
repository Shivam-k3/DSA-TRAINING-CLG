// //wap to take a sting and count the number of vowels and consonants in it also count the number of words in it and find the length of the string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>  
int main()
{
    char str[100];
    int i,vowels=0,consonants=0,words=1,length=0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    length = strlen(str);
    for(i=0; str[i]!='\0'; i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        else if(str[i]==' ' && str[i-1]!=' ')
        {
            words++;
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Length: %d\n", length);
    printf("Words: %d\n", words);
    return 0;
}

// // //create a game to guess a number between 1 to 100 with certain number of attempts
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
int main()
{
    int number, guess, attempts=0;
    srand(time(0));
    number = rand()%100 + 1;
    printf("guess a number between 1 to 100:");
    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        if (guess < number)
        {
            printf("Too low! Try again.\n");
        }
        else if (guess > number)
        {
            printf("Too high! Try again.\n");
        }
        else
        {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != number && attempts < 10);
    if (attempts == 10)
    {
        printf("Sorry, you've used all your attempts. The number was %d.\n", number);
    }
    return 0;
}

// // wap a to find give year is leap year or not using function
#include <stdio.h>
int isLeapYear(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1; 
    else
        return 0; 
}
int main()
{
    int year;
    printf("enter a year: ");
    scanf("%d", &year); 
    if(isLeapYear(year))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);

}