#include <stdio.h>
void reversearray(int *a)
{
    int i, j;
    for (i = 0, j = 2; i < j; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
int main()
{
    int a[] = {2, 3, 4};
    reversearray(&a);
    int i;
    for (i = 0; i <= 2; i++)
        printf("%d\t", a[i]);
    return 0;
}