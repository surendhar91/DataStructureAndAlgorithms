#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
}void printArray(int *ar,int size){
    int i=0;
    printf("\n");
    for(i=0;i<size;i++){
        
        printf("%d ",ar[i]);
    }
}
int partition(int *ar,int p,int r){
    
   int x = ar[r];
    int i = (p - 1);
	int j;
    for ( j = p; j <= r- 1; j++)
    {
        if (ar[j] <= x)
        {
            i++;
            swap (&ar[i], &ar[j]);
        }
    }
    swap (&ar[i + 1], &ar[r]);
    return (i + 1);
}
int findMedian(int *ar,int low,int high,int k){
	
		if(low==high)return ar[low];
		int pivot = partition(ar,low,high);
        //printArray(ar,high);
       // printf("pivot %d",pivot);
		int len= pivot-low+1;
		if(k==len-1)return ar[pivot];
		else if(k>len-1){
			return findMedian(ar,pivot+1,high,k-len);
		}else{
			return findMedian(ar,low,pivot-1,k);
		}	
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
   ;
	printf("%d",findMedian(_ar,0,_ar_size-1,(_ar_size/2)));
    return 0;
}
