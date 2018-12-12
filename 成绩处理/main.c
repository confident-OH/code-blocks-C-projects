#include"range.h"
#include"search.h"
int main(void)
{
	int n,i,num;
	scanf("%d",&n);
	int score[n];
	char name[n][50];
	char *names=&name[0][0];
	for(i=0;i<n;i++)
	{
		scanf("%s",names+50*i);
		scanf("%d",&score[i]);
	}
	range(score,names,n);
	for(i=0;i<n;i++)
		printf("%-20s %d\n",names+50*i,score[i]);
	printf("\n");
	scanf("%d",&num);
	int goal[num];
	for(i=0;i<num;i++)
		scanf("%d",&goal[i]);
	search(goal,score,names,num,n);

	return 0;
 }

