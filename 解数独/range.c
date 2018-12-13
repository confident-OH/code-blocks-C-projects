void range(char (*square)[9], int count, char num)
{
	int i,x,y;
	char copy[9][9];
	char *b = copy[0];
	ccopy(square, copy);
	if(count>=0) *(b+count) = num;
	do{
		count++;
		if(count==81){
			pf(copy[0]);
			return;
		}
	}while(*(b+count)!='.');
	x=count/9+1;
	y=count%9+1;
	for(i=1;i<=9;i++){
		if(test(copy, x, y, (char)(i+'0'))){
			range(copy, count, (char)(i+'0'));
		}
	}
 }
