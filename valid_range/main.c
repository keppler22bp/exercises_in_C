// Take a numbers inbetween 2 and 7 and do the factorial of it
// n + 1

#include <stdio.h>

int main(void) {
    char choice;
    int n;
    double sum;

    while (1) {
        printf("Enter a value for n, where 2 <= n <= 7: ");
        scanf("%d", &n);

        while (!(2 <= n && n <= 7)) {
            scanf("%d, Invalid input try again", &n);
        }

        sum = 0;
        double factorial = 0;

        for (int j = 2; j <= n + 1; j++) {
            factorial = 1;
            for (int i = 1; i <= n; i++) {
                // something
            }
            sum *= factorial;
        }
    }

    printf("The sum %lf\n", &sum);

    printf("Would you like to try again y/n?");
    scanf("%c", &choice);

    if (choice == 'y') {
        return 0;
    }

    return 0;
}
