void ccopy(char (*square)[9], char (*copy)[9])
{
	char *a = square[0], *b = copy[0];
	int i;
	for(i=0;i<81;i++){
		*b = *a;
		b++;
		a++;
	}
}
