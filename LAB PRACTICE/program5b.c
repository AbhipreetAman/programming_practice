#include <stdio.h>
void toh(int, char, char, char, int *);

int main()
{
    int n, m = 0;
    printf("enter the number of disks\n");
    scanf("%d", &n);
    toh(n, 's', 't', 'd', &m);
    printf("number of moves=%d\n", m);
    return 0;
}
void toh(int n, char s, char t, char d, int *m)
{
    if (n == 1)
    {
        printf("move disk %d from %c to %c\n", n, s, d);
        (*m)++;
        return;
    }
    else
    {
        toh(n-1,s,d,t,m);
        printf("move disk %d from %c to %c\n",n,s,d);
        (*m)++;
        toh(n-1,t,s,d,m);
        return;
    }
}