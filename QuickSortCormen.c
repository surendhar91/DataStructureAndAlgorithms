#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
//Not working
void printArray(int *ar,int low,int high){
    int i=0;
    printf("\n");
    for(i=low;i<high;i++){
        
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
    
    int x=ar[p];
    int i=p,j;
    for(j=p+1;j<r;j++){
        if(ar[j]<=x){
            i++;
            swap(&ar[j],&ar[i]);
        }
        
    }
    swap(&ar[p],&ar[i]);
    return i;
}
void quickSort(int *  ar,int low,int high) {
    int pivot;
    if(low<high){
        pivot=partition(ar,low,high);
        //printArray(ar,low,high);
		quickSort(ar,low,pivot-1);
        //printArray(ar,low,pivot-1);
        quickSort(ar,pivot+1,high);
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
quickSort(_ar,0,_ar_size);
printArray(_ar,0,_ar_size);   
   return 0;
}
