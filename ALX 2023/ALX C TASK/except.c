#include <stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
char c;
      c = 'a';
      while(c <= 'z')
      {
        if (c != 'q' && c != 'e')
              putchar(c);
              c=c+1;
      }
      return 0;
}