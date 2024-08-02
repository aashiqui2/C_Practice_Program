/*balanced and unbalanced expression */
#include <stdio.h>
char stack[8];
int top = -1;
void push(char c)
{
    if (top == 8 - 1)
    {
        printf("stack overflow");
    }
    else
    {
        stack[++top] = c;
    }
    // printf("incremented %d\n", top);
    // printf(" added %c \n", c);
}
void pop()
{
    if (top == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        // printf("Popped %c, Stack top at %d\n", stack[top], top);
        top--;
    }
}
int isMatchingPair(char openb, char closeb)
{
    return (openb == '{' && closeb == '}') ||
           (openb == '[' && closeb == ']') ||
           (openb == '(' && closeb == ')');
}

int main()
{
    char c[] = {'{', '[', '(', ')', '[', '(', ']', '}', '\0'};
    // char c[] = {'{', '(', ')', '[', ']', '}', '\0'};
    for (int i = 0; c[i] != '\0'; i++)
    {
        for (int j = i + 1; c[j] != '\0'; j++)
        {
            if (c[i] > c[j])
            {
                char d = c[i];
                c[i] = c[j];
                c[j] = d;
            }
        }
    }

    for (int i = 0; c[i] != '\0'; i++)
    {
        if (c[i] == '{' || c[i] == '(' || c[i] == '[')
        {
            push(c[i]);
        }
        else if (c[i] == '}' || c[i] == ')' || c[i] == ']')
        {
            if (top == -1)
            {
                printf("not closed properly\n");
                return 1;
            }
            char topChar = stack[top];
            if (isMatchingPair(topChar, c[i]))
            {
                pop();
            }
        }
    }
    if (top == -1)
    {
        printf("closed properly\n");
    }
    else
    {
        printf(" Stack not empty\n");
    }

    return 0;
}