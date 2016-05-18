#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i=0;
    scanf("%d",&n);
    int *a=(int *)malloc(sizeof(int)*n);
    int *c=(int *)malloc(sizeof(int)*100);
    for(i=0;i<100;i++)
        c[i]=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        c[a[i]]++;
    }
    for(i=0;i<100;i++){
        printf("%d ",c[i]);
    }
    
    return 0;
}
