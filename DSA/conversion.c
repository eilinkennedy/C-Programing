#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int precedence(char op) {
    if (op == '^')
        return 3;
    if (op == '*' || op == '/')
        return 2;
    if (op == '+' || op == '-')
        return 1;
    return -1;
}

void infixToPostfix(char infix[], char postfix[]) {
    int i, j = 0, top = -1;
    char stack[MAX_SIZE];

    for (i = 0; i < strlen(infix); i++) {
        if (infix[i] >= 'a' && infix[i] <= 'z') {
            postfix[j++] = infix[i];
        } else if (infix[i] == '(') {
            stack[++top] = infix[i];
        } else if (infix[i] == ')') {
            while (top >= 0 && stack[top] != '(') {
                postfix[j++] = stack[top--];
            }
            if (top >= 0 && stack[top] != '(') {
                printf("Invalid expression\n");
                return;
            }
            top--;
        } else {
            while (top >= 0 && precedence(infix[i]) <= precedence(stack[top])) {
                postfix[j++] = stack[top--];
            }
            stack[++top] = infix[i];
        }
    }

    while (top >= 0) {
        postfix[j++] = stack[top--];
    }
    postfix[j] = '\0';
}

int main() {
    char infix[MAX_SIZE], postfix[MAX_SIZE];

    printf("Enter an infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    return 0;
}
