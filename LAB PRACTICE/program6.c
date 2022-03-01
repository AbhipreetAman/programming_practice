#include <stdio.h>
#include <stdlib.h>
#define MAX 5
void encqueue(char[], int *, int *);
char delcqueue(char[], int *, int *);
void display(char[], int, int);
int main()
{
    char q[MAX], temp;
    int choice, done = 0, i, f = 0, r = 0;
    while (!done)
    {
        printf("1.insert\t2.delete\t3.display\t4.exit\n");
        printf("enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            encqueue(q, &f, &r);
            display(q, f, r);
            break;
        case 2:
            temp = delcqueue(q, &f, &r);
            if (temp == '#')
                printf("queue underflow\n");
            else
                printf("element deleted=%c\n", temp);
            display(q, f, r);
            break;
        case 3:
            display(q, f, r);
            break;
        case 4:
            done = 1;
            break;
        default:
            printf("invalid choice\n");break;
        }
    }
    return 0;
}
void encqueue(char q[], int *f, int *r)
{
    char e;
    if (*f == (*r + 1) % MAX)
        printf("circular queue overflow\n");
    else
    {
        printf("enter the element to be inserted\n");
        scanf(" %c",&e);
        *r = ((*r + 1) % MAX);
        q[*r] = e;
    }
}
char delcqueue(char q[], int *f, int *r)
{
    char x;
    if (*f == *r)
        return '#';
    else
    {
        *f = (*f + 1) % MAX;
        x = q[*f];
    }
    return x;
}
void display(char q[], int f, int r)
{
    int i = f;
    if (f == r)
        printf("queue is empty\n");
    else
    {
        while (i != r)
        {
            i = (i + 1) % MAX;
            printf("%c\t", q[i]);
        }
        printf("\n");
    }
}