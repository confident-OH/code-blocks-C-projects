#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void CLEAR(int*);
void CHANGE(int*, int, int);
int main()
{
    int n, i, item, ich, sign=0, scale=10;//sign determined 'ADD','SUB','MUL','DIV','MOD'
    char character[10], ch[10];//ch will turn to ich
    scanf("%d", &n);
    getchar();
    for (i=0;i<n;i++){
        scanf("%s", character);
        if (!strcmp("CLEAR", character))
            CLEAR(&item);
        if (!strcmp("CHANGE", character)){
            scanf("%s", ch);
            ich = atoi(ch);
            CHANGE(&item, ich, scale);
        }
        if (!strcmp("EQUAL", character))
            printf("%d\n", item);
        if (!strcmp("ADD", character)){
            sign = 1;
        }
        if (!strcmp("SUB", character)){
            sign = 2;
        }
        if (!strcmp("MUL", character)){
            sign = 3;
        }
        if (!strcmp("DIV", character)){
            sign = 4;
        }
        if (!strcmp("MOD", character)){
            sign = 5;
        }
        if (!strcmp("NUM", character)){
            scanf("%s", ch);
            switch(sign){
                case 0:item = atoi(ch); sign=0; break;
                case 1:item += atoi(ch); sign=0; break;
                case 2:item -= atoi(ch); sign=0; break;
                case 3:item *= atoi(ch); sign=0; break;
                case 4:item /= atoi(ch); sign=0; break;
                case 5:item %= atoi(ch); sign=0; break;
            }
        }
        getchar();
    }
    return 0;
}
void CLEAR(int *a)
{
    *a = 0;
}
void CHANGE(int *a, int b, int c)
{
    int i=1, n;
    while (*a!=0){
        n += i*c*(*a%10);
        *a = *a/10;
    }
    while (n!=0){
        *a +=
    }
    *a = n;
}
