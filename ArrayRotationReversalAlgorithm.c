#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void printArray(int arr[],int start,int end){
	int i;
	for(i=start;i<end;i++){
		printf("%d ",arr[i]);
		}
}
int leftRotate(int arr[],int start,int end){
		int d=1;
		reverseArray(arr,end-1,end-1);
		reverseArray(arr,start,end-(d+1));
		reverseArray(arr,start,end-1);
	
}
void reverseArray(int arr[],int start,int end){
	int temp;
	while(start<end){
		temp=arr[end];
		arr[end]=arr[start];
		arr[start]=temp;
		start++;end--;
	}
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int _ar_size;
    int N,K,Q;//K- no of times the array has to be rotated.
    //N - size of the array
    //Q - no of queries
    scanf("%d", &N);
    scanf("%d",&K);
    scanf("%d",&Q);
    int _ar[N], _ar_i,elem[Q];
    for(_ar_i = 0; _ar_i < N; _ar_i++) { 
     scanf("%d", &_ar[_ar_i]); 
    }
    for(_ar_i=0;_ar_i<Q;_ar_i++){
        scanf("%d",&elem[_ar_i]);
        
    }
	for(_ar_i=0;_ar_i<K;_ar_i++){
		leftRotate(_ar,0,N);
	}
	
    //printArray(_ar,0,N);
	for(_ar_i=0;_ar_i<Q;_ar_i++){
		printf("%d\n",_ar[(elem[_ar_i]+K)%N]);
	}
    
    return 0;
}
