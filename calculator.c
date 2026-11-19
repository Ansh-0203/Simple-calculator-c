/*
 * Simple Calculator in C
 * Author : Ansh Kumar (Roll No: 29044)
 * Course : B.Tech CSE, Semester 1
 *
 * A menu-driven calculator that performs basic arithmetic.
 * Concepts used: variables, input/output, switch-case,
 *                loops, if-else, and functions.
 */

#include <stdio.h>

/* Function declarations */
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main(void)
{
    int choice;
    double num1, num2;

    do
    {
        printf("\n===== SIMPLE CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice == 5)
        {
            printf("Thank you for using the calculator. Goodbye!\n");
            break;
        }

        if (choice < 1 || choice > 5)
        {
            printf("Invalid choice! Please try again.\n");
            continue;
        }

        printf("Enter first number : ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (choice)
        {
            case 1:
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, add(num1, num2));
                break;
            case 2:
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, subtract(num1, num2));
                break;
            case 3:
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, multiply(num1, num2));
                break;
            case 4:
                if (num2 == 0)
                    printf("Error: Division by zero is not allowed!\n");
                else
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, divide(num1, num2));
                break;
        }
    } while (choice != 5);

    return 0;
}

double add(double a, double b)      { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b)   { return a / b; }
