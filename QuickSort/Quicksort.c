void quicksort(int *a,int left,int right)
{
    int item;
    if(left<right){
        item=change(a,left,right);
        quicksort(a,left,item-1);
        quicksort(a,item+1,right);
    }
}
