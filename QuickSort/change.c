int change(int *a, int left, int right)
{
    int i,j;
    i=left;
    j=right+1;
    int mid=(i+j)/2;
    swap(a,left,mid);
    while(1){
        while(a[++i]<=a[left]&&i<=right) ;
        while(a[--j]>=a[left]&&j>=left) ;
        if(i>=j)
            break;
        swap(a,i,j);
    }
    swap(a,left,j);
    return j;
}

