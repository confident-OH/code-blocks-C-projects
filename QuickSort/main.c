#include <stdio.h>
#include <stdlib.h>
#include"change.h"
#include"Quicksort.h"
#include"swap.h"
int main()
{
    int n,i;
    scanf("%d",&n);
    int left=0,right=n-1;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,left,right);
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\n");
    printf("按任意键结束\n");
    getch();
    return 0;
}


