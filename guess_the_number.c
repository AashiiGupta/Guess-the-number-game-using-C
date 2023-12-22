#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    printf("Hey! Here in the computer mind , there is a number between (0-9)... Can you guess it ?\n");
    printf("And you have only three chances to guess the right number.\n\n");
    srand(time(NULL));
    int num = rand() % 10;
    int myNum, i;

    for (i = 0; i < 3; i++)
    {
        printf("Guess the number:");
        scanf("%d", &myNum);
        if (num == myNum)
        {
            printf("Yes! You got it :)");
            break;
        }
        else if (num > myNum)
        {
            printf("Your guess number is greater than %d. Try agian! *_*\n\n", myNum);
        }
        else
        {
            printf("Your number is smaller than %d. Try again! *_*\n\n", myNum);
        }
    }
    if (i == 3 && num != myNum)
    {
        printf("You are failed to guess :(");
    }

    return 0;
}