#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    double result,i,j;
    scanf("%lf%c%lf",&i,&ch,&j);
    switch(ch){
        case('+'): result=i+j;break;
        case('-'): result=i-j;break;
        case('*'): result=i*j;break;
        case('/'): result=i/j;break;
    }
    printf("%lf%c%lf=%lf",i,ch,j,result);
    return 0;
}
