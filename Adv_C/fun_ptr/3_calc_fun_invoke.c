/*
3)"Write the calculator program using a function that accepts a function pointer and the operand values as arguments and invokes it. In the main function, simply invoke this function by sending the appropriate function address, based on the operator chosen.
eg.,
in main
case '+' :invokeptr(add , x,y);
invokeptr(int (*fptr) (int,int) , int x, int y)
{
printf(""%d\n"",fptr(x,y));
}"
*/
#include <stdio.h>

// Function prototypes for arithmetic operations
int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

// Function prototype for invoking the function pointer
void invokeptr(int (*fptr)(int, int), int x, int y) {
    printf("%d\n", fptr(x, y));
}

int main() {
    int x, y;
    char op;


    // Prompt the user for input
    printf("Enter first integer: ");
    scanf("%d", &x);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter second integer: ");
    scanf("%d", &y);

    // Determine the operation based on the user input
    switch (op) {
        case '+':
            invokeptr(add, x, y);
            break;
        case '-':
            invokeptr(sub, x, y);
            break;
        case '*':
            invokeptr(mul, x, y);
            break;
        case '/':
            invokeptr(divide, x, y);
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }



    return 0;
}

