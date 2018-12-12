#include <stdio.h>
#include <stdlib.h>
int func(int a,int b);
int main(void)
{
    int a[1000],b[1000];
    int i=0,j=0;
    while(8){
        scanf("%d",&a[i]);
        if(a[i]==0)
            break;
        scanf("%d",&b[i]);
        i++;
    }
    for(j=0;j<i;j++)
        printf("%d\n",func(a[j],b[j]));

    return 0;
}
int func(int a,int b)
{
    int i;
    for(i=2;i<=a;i++){
        if(a%i==0&&b%i==0)
            return (i*func(a/i,b/i));
    }
    return 1;
}
