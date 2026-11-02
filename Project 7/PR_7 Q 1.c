#include <stdio.h>

int main() {
    int choice;
    int num1, num2;

    while (1) {
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            break; 
        }

        if (choice >= 1 && choice <= 5) {
            printf("Enter the first number: ");
            scanf("%d", &num1);
            printf("Enter the second number: ");
            scanf("%d", &num2);
        }

        switch (choice) {
            case 1:
                printf("Addition of %d and %d is %d\n\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("Subtraction of %d and %d is %d\n\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("Multiplication of %d and %d is %d\n\n", num1, num2, num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Division of %d and %d is %d\n\n", num1, num2, num1 / num2);
                } else {
                    printf("Error: Division by zero is not allowed.\n\n");
                }
                break;
            case 5:
                if (num2 != 0) {
                    printf("Modulo of %d and %d is %d\n\n", num1, num2, num1 % num2);
                } else {
                    printf("Error: Division by zero is not allowed.\n\n");
                }
                break;
            default:
                printf("Invalid choice! Please choose a valid option.\n\n");
                break;
        }
    }

    return 0;
}

