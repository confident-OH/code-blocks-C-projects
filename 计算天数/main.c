#include <stdio.h>
int day(int year,int month,int data);
int main(void)
{
    int year,month,data;
    scanf("%d %d %d",&year,&month,&data);
    printf("%d",day(year,month,data));
    return 0;
}
int day(int year,int month,int data)
{
    int n=month-2;
    int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    if((year%4==0&&year%100!=0)||year%400==0){
        if(n>=0)
            return (a[n]+day(year,month-1,data));
        else
            return data;
    }
    else{
        a[1]=28;
        if(n>=0)
            return (a[n]+day(year,month-1,data));
        else
            return data;
    }
}
