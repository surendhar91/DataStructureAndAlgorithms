#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void printArray(int *ar,int size){
    int i=0;
 
    for(i=0;i<size;i++){
        
        printf("%d ",ar[i]);
    }   printf("\n");
}
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
}
int partition(int *ar,int left,int right){
    
   int low=left,high=right;
   int pivot=ar[right];//picking the last element as pivot
   while(left<right){
			
	   while(ar[left]<pivot)left++;
	   while(ar[right]>=pivot)right--;
	   
	   if(left<right)
		   swap(&ar[left],&ar[right]);
			
   }
   ar[high]=ar[left];//swapping ar[i] with ar[p]
   ar[left]=pivot;
   return left;
}
void quickSort(int *  ar,int low,int high,int size) {
    int pivot;
    if(low<high){
        pivot=partition(ar,low,high);
        printArray(ar,size);
		quickSort(ar,low,pivot-1,size);
        //printArray(ar,low,pivot-1);
        quickSort(ar,pivot+1,high,size);
		
		
	//	printf("Low %d high %d",low,high);
        
        
    }
    

}

int main(void) {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}
//swap(&_ar[0],&_ar[_ar_size-1]);
quickSort(_ar,0,_ar_size-1,_ar_size);
//printArray(_ar,_ar_size);   
   return 0;
}
