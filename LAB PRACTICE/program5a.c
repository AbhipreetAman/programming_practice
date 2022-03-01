
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#define MAX 60

void push(float[], int *, float);
float pop(float[], int *);
float eval(char[]);
float oper(char, float, float);

int main()
{
    char exp[MAX];
    printf("enter the postfix expression\n");
    scanf("%s", exp);
    printf("original postfix expression is %s", exp);
    printf("\n %0.2f\n", eval(exp));
    return 0;
}
float eval(char expr[])
{
    char c;
    int pos, top = -1;
    float result, s[MAX], op1, op2, r;
    for (pos = 0; (c = expr[pos]) != '\0'; pos++)
    {
        if (isdigit(c))
        {
            push(s, &top, (c - '0'));
        }
        else
        {
            op2 = pop(s, &top);
            op1 = pop(s, &top);
            r = oper(c, op1, op2);
            push(s, &top, r);
        }
    }
    result = pop(s, &top);
    return result;
}
float oper(char sym, float op1, float op2)
{
    switch (sym)
    {
    case '+':
        return (op1 + op2);
    case '-':
        return (op1 - op2);
    case '*':
        return (op1 * op2);
    case '/':
        return (op1 / op2);
    case '^':
        return ((float)pow(op1, op2));

    case '%':
        return ((float)((int)op1 % (int)op2));

    default:
        printf("invalid expression\n");
        exit(1);
    }
}
void push(float items[], int *top, float e)
{
    items[++(*top)] = e;
}
float pop(float items[], int *top)
{
    return items[(*top)--];
}