#include <stdio.h>

int main() {
    int outerCount = 0;
    int innerCount = 0;

    while (outerCount < 3) {
        printf("Outer loop iteration: %d\n", outerCount);

        while (innerCount < 5) {
            printf("Inner loop iteration: %d\n", innerCount);
            innerCount++;
        }

        innerCount = 0; // Reset the inner loop counter
        outerCount++;
    }

    return 0;
}
