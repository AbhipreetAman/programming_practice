#include <stdio.h>

int main(){int i,j;
    int a[]={2,3,3,3,3,6,7,8,9,10};
    int last_duplicate=0;
    for(i=0;i<10;i++)
    {
        if(a[i]==a[i+1] && a[i]!=last_duplicate )
        printf("%d\n",a[i]);
        last_duplicate=a[i];
    }
    return 0;
}