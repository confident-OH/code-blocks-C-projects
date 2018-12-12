void search(int *goal,int *score,char *name,int num,int n)
 {
 	int i=0;
 	for(i=0;i<num;i++){
 		int front=0,last=n-1,mid;
 		while(front<=last){
 			mid=(front+last)/2;
 			if(goal[i]==score[mid]){
 				printf("%-20s %d\n",name+50*mid,score[mid]);
 				break;
 			}
 			else
				if(goal[i]>score[mid])
 					last=mid-1;
 				else
 					front=mid+1;
		 }
		 if(goal[i]!=score[mid]){
			printf("Not found!\n");
		 }
	 }
 }

