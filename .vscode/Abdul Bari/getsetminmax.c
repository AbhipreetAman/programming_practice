#include <stdio.h>
struct array
{
    int a[10];
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    printf("\n elements are\n");
    for (i = 0; i < arr.length; i++)
        printf("%d\t", arr.a[i]);
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int get(struct array arr, int index)
{
    if (index >= 0 && index < arr.length)
        return arr.a[index];
    return -1;
}
void set(struct array *arr, int index, int x)
{ if (index >= 0 && index < arr->length)
arr->a[index]=x;
}

void insertsort(struct array *arr,int x)
{int i=arr->length-1;
if (arr->length==arr->size)
return;
    while(i>=0 && arr->a[i]>x)
    {
        arr->a[i+1]=arr->a[i];
        i--;
    }
    arr->a[i+1]=x;
    arr->length++;
}

int isorted(struct array arr)
{
    int i;
    for(i=0;i<(arr.length-1);i++)
    {
        if (arr.a[i]>arr.a[i+1])
        return 0;
    }
    return 1;
}




int main()
{struct array arr1={{2,4,5,6,7,9,8},10,7};
printf("%d",isorted(arr1));
return 0;
}