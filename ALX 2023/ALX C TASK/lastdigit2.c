#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */

int main(void)
{
        int n = -12345678;
        int lastDigit = n % 10;
        if( lastDigit > 5)
        {
         printf("the last digit of %d is %d and is greater than 5", n,lastDigit);
        }
        else if (lastDigit == 0)
        {
            printf("the last digit of %d is %d and is 0", n,lastDigit); 
        }
        else if (lastDigit < 6 && lastDigit!=0)
        {
                printf("The last digit of %d is %d and is less than 6 and not 0", n, lastDigit);
        }
        return 0;
}