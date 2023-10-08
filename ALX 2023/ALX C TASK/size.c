#include <stdio.h>
int main()
{
    unsigned long long int boo;
    unsigned long int name;
printf("Size of a char: %d byte(s)\n",sizeof(char));
printf("Size of an int: %d byte(s)\n",sizeof(int));
printf("Size of a long int: %zu byte(s)\n",sizeof(unsigned long int));
printf("Size of a long long int: %zu byte(s)\n",sizeof(boo));
printf("Size of a float: %d byte(s)",sizeof(float));
    return 0;
}
