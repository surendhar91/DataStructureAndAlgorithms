#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i=0;
    scanf("%d",&n);
    int *a=(int *)malloc(sizeof(int)*n);
    int *output=(int *)malloc(sizeof(int)*n);
    int *c=(int *)malloc(sizeof(int)*100);
    for(i=0;i<100;i++)
        c[i]=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        c[a[i]]++;
    }
    for(i=0;i<100;i++){
        c[i]+=c[i-1];//Adding the previous value
    }
    for(i=0;i<n;i++){
		//Get the element and identify the count value.
		//Place the element at the count value.
		//Decrement the count value, so that when a new element came, we can place it in the previous index.
        output[c[a[i]]-1]=a[i];
        --c[a[i]];
    }
    for(i=0;i<n;i++)
        printf("%d ",output[i]);
    
    return 0;
}
/*
 * For simplicity, consider the data in the range 0 to 9. 
Input data: 1, 4, 1, 2, 7, 5, 2
  1) Take a count array to store the count of each unique object.
  Index:     0  1  2  3  4  5  6  7  8  9
  Count:     0  2  2  0   1  1  0  1  0  0

  2) Modify the count array such that each element at each index 
  stores the sum of previous counts. 
  Index:     0  1  2  3  4  5  6  7  8  9
  Count:     0  2  4  4  5  6  6  7  7  7

The modified count array indicates the position of each object in 
the output sequence.
 
  3) Output each object from the input sequence followed by 
  decreasing its count by 1.
  Process the input data: 1, 4, 1, 2, 7, 5, 2. Position of 1 is 2.
  Put data 1 at index 2 in output. Decrease count by 1 to place 
  next data 1 at an index 1 smaller than this index.
 * */
