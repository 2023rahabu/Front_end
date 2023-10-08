#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;

    printf("Enter a number\n");
    scanf("%d",&n);

    if(n>0)
    {
        printf("%d is positive",n);
    }
    else if(n==0)
    {
        printf("The number is zero");
    }
    else
    {
        printf("number is negative");
    }
    return 0;
}
