#include <stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
char c;
char C;
      c = 'a';
      C = 'A';
      while(c <= 'z')
      {
              putchar(c);
              c=c+1;
      }
while(C <= 'Z')
{
putchar(C);
 
C=C+1;          
}
      
return 0;
}
