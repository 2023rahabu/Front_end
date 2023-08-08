#include <stdio.h>
int main(int argc, char const *argv[])
{
    char c;
    c = 'z';
    while(c <= 122 && c >= 97)
    {
    putchar(c);
     c = c-1;
    }
    return 0;
}
