#include <stdio.h>
int main(int argc, char const *argv[])
{
    unsigned int age = 100;
 int count = 0;
 while (count < 4)
 {
    printf("enter your age please\n");
    scanf("%d",&age);
    if (age < 100)
    {
        printf("Hey you still young\n");
    }

    else if(age == 100)
    {
        printf("Hey you are very old\n");

    }
    else
    {
        printf("you are really old\n");
    }
count ++;

if (count == 4)
{
    printf("you have reached the maximum number of attempts.exit\n");
    break;
}

char choice;
        printf("Do you want to check again? (y/n): ");
        scanf(" %c", &choice);

        if (choice != 'y' && choice != 'Y') {
            break;
        }
    }

    return 0;
}
