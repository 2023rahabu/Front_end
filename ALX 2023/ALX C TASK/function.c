#include <stdio.h>


void sum()
{
    int a,b,sum=0;
    printf("enter two numbers:\n");
    scanf("%d %d",&a,&b);
    sum = a+b;
    printf("sum equal %d\n",sum);
}
int main()
{
    sum();
    printf("sum of two numbers\n");
    sum();
    return 0;
}
