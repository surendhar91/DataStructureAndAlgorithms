#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#define INT_MAX 2147483647
void printArray(int *ar,int size){
    int i=0;
    printf("\n");
    for(i=0;i<size;i++){
        
        printf("%d ",ar[i]);
    }
}
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
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
void quickSort(int *  ar,int low,int high,int size) {
    int pivot;
    if(low<high){
        pivot=partition(ar,low,high);
       // printArray(ar,size);
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
int minDiff=INT_MAX,currentDiff;
for(_ar_i=0;_ar_i<_ar_size-1;_ar_i++){
      currentDiff=_ar[_ar_i+1]-_ar[_ar_i];
      if(abs(currentDiff)<minDiff)
          minDiff=abs(currentDiff);
}
  //printf("Min Diff is %d",minDiff);
for(_ar_i=0;_ar_i<_ar_size-1;_ar_i++){
      currentDiff=_ar[_ar_i+1]-_ar[_ar_i];
      if(abs(currentDiff)==minDiff)
          printf("%d %d ",_ar[_ar_i],_ar[_ar_i+1]);
}
   return 0;
}
