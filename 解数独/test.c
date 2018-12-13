int test(char (*copy)[9], int x, int y, char num)
{
	int i,j;
	char *a = (char*)copy;
	for(i=1;i<=9;i++){
		for(j=1;j<=9;j++){
			if(!(i==x&&j==y)&&((i == x)||(y == j)||(((i-1)/3==(x-1)/3)&&((j-1)/3==(y-1)/3)))){
				if(*a==num)
					return 0;
			}
			a++;
		}
	}
	return 1;
}
