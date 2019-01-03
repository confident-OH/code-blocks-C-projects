#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int main(void)
{
	int i=1;
	char ch;
	FILE *fp;
	fp=fopen("C:\\abc.dat","w+");
	assert(fp==NULL);
	while((ch=getchar())!=EOF){
		if(ch=='\n'){
			fprintf(fp,"  line:%d", i++);
		}
		fputc(ch,fp);
	}
	if(!fclose(fp))
		printf("Failed to close the document!\n");
	return 0;
}
