void pf(char *p){
	static count=1;
	printf("´ð°¸%d:\n",count);
	int i;
	for(i=0;i<81;i++){
		printf("%4c",*(p+i));
		if((i+1)%9==0)
			printf("\n");
	}
	count++;
}
