#include <stdio.h>

int main() {
    int age, count = 0;

    while (count < 4) {
        printf("Enter your age: ");
        scanf("%d", &age);

        if (age < 100) {
            printf("You are young.\n");
        } else if (age == 100) {
            printf("You are old.\n");
        } else {
            printf("You are really old.\n");
        }

        count++;

        if (count == 5) {
            printf("You have reached the maximum number of attempts. Exiting.\n");
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
