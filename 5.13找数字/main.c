#include <stdio.h>
#include <stdlib.h>
int digit(int a,int b);
int main()
{
    int k,n;
    scanf("%d %d",&n,&k);
    printf("%d",digit(n,k));
    return 0;
}
int digit(int a,int b)
{
    int i;
    b-=1;
    for(i=0;i<b;i++)
        a/=10;
    if(a!=0)
        return (a%10);
    else
        return -1;
}
