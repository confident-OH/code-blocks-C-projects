#include<string.h>
void range(int *score,char *name,int n)
 {
 	int i,j,item;
 	char ch[50];
 	for(i=0;i<n;i++){
 		for(j=0;j<n-i-1;j++){
 			if(score[j]<score[j+1]){
 				item=score[j];
 				score[j]=score[j+1];
 				score[j+1]=item;
 				strcpy(ch,name+50*j);
 				strcpy(name+50*j,name+50*(j+1));
 				strcpy(name+50*(j+1),ch);
			 }
		 }
	 }
 }
