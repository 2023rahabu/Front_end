
#include<stdio.h>
void print_alphabet(void);
int main(int argc, char const *argv[])
{
 print_alphabet();
    return 0;
}


void print_alphabet(void)
{
    char a;

for (a=97; a <=122;a++)
{
    putchar(a);
}
}