#include<stdio.h>
int main(void)
{
	int i,n;
	printf("please enter n:");
	scanf("%d",&n);
	for (i=2;i<n;i++){
		if(n%i==0)
			printf("%d\t",i);
	}
	return 0;
}
