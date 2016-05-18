#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

static void partition(int[] ar) {
      List<Integer> smallerValues = new ArrayList<Integer>();
      List<Integer> biggerValues = new ArrayList<Integer>();
      int toPartitionAround = ar[0];
      for(int c=1;c<ar.length;c++) {
          if(ar[c] <= toPartitionAround) {
              smallerValues.add(ar[c]);
          } else {
              biggerValues.add(ar[c]);
          }
      }
      for(int c=0;c<smallerValues.size();c++) {
          ar[c] = smallerValues.get(c);
      }
      ar[smallerValues.size()] = toPartitionAround;
      for(int m=0;m<biggerValues.size();m++) {
          ar[m + smallerValues.size() + 1] = biggerValues.get(m);
      }
      printArray(ar); 
   }
	


int main(void) {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

partition(_ar_size, _ar);
   
   return 0;
}
