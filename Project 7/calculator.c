#include <stdio.h>

int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    return a / b;
}

int modulus(int a, int b) {
    return a % b;
}

int main() {
    int choice, a, b;

    do {
        printf("\nPress 1 for +");
        printf("\nPress 2 for -");
        printf("\nPress 3 for *");
        printf("\nPress 4 for /");
        printf("\nPress 5 for %%");
        printf("\nPress 0 for exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {

            printf("Enter the first number: ");
            scanf("%d", &a);

            printf("Enter the second number: ");
            scanf("%d", &b);

        }

        switch (choice) {

            case 1:
                printf("Addition of %d and %d is %d\n",
                       a, b, addition(a, b));
                break;

            case 2:
                printf("Subtraction of %d and %d is %d\n",
                       a, b, subtraction(a, b));
                break;

            case 3:
                printf("Multiplication of %d and %d is %d\n",
                       a, b, multiplication(a, b));
                break;

            case 4:
                if (b != 0) {
                    printf("Division of %d and %d is %d\n",
                           a, b, division(a, b));
                }
                else {
                    printf("Division by zero is not possible.\n");
                }
                break;

            case 5:
                if (b != 0) {
                    printf("Modulus of %d and %d is %d\n",
                           a, b, modulus(a, b));
                }
                else {
                    printf("Modulus by zero is not possible.\n");
                }
                break;

            case 0:
                printf("Calculator exited successfully.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}
