#include"range.h"
int main(void)
{
	char square[9][9];
	char *p=&square[0][0];
	int i;
	for(i=0;i<81;i++)
		*(p+i)='\0';
	printf("请输入数独题目:（空位'.'代替且数字之间不要有空格）示例：\n");
	printf("53..7....\n");
	printf("6..195...\n");
	printf(".98....6.\n");
	printf("8...6...3\n");
	printf("4..8.3..1\n");
	printf("7...2...6\n");
	printf(".6....28.\n");
	printf("...419..5\n");
	printf("....8..79\n\n");
	for(i=0;i<81;i++){
		scanf("%c",p+i);
		if((i+1)%9==0)
			getchar();
		}
	range(square,-1,'0');
	getchar();
	return 0;
}
