#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void printArray(int *ar,int ar_size){
    
    
	int i;
    for(i=0;i<ar_size;i++){
        
        printf("%d ",ar[i]);
    }
    printf("\n");
    
}
void insertionSort(int ar_size, int *  ar) {
    int i,j;
	//int inserted=0;
	for(i=1;i<ar_size;i++){
		int lastElem=ar[i];
		j=i-1;
		for(;j>=0&&ar[j]>lastElem;j--){
            ar[j+1]=ar[j];
			//inserted=1;
		}
		ar[j+1]=lastElem;
		printArray(ar,ar_size);
	}
	//printArray(ar,ar_size);
	

}
int main(void) {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

insertionSort(_ar_size, _ar);
   
   return 0;
}
