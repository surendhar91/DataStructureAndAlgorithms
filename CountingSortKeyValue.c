#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i=0;
    scanf("%d",&n);
    int *a=(int *)malloc(sizeof(int)*n);
    char output[n][10];
    int *c=(int *)malloc(sizeof(int)*100);
    char m[n][10];
    for(i=0;i<100;i++)
        c[i]=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        scanf("%s",&m[i]);
        
    }
    for(i=0;i<n;i++){
        c[a[i]]++;
    }
    for(i=1;i<100;i++){
        c[i]+=c[i-1];//Adding the previous value
    }
    for(i=0;i<n;i++)
        strcpy(output[i],"-");
    for(i=n-1;i>(n-1)/2;i--){
		//To start from the last, stable.
        strcpy(output[c[a[i]]-1],m[i]);
        --c[a[i]];
    }
    
   
    for(i=0;i<n;i++)
        printf("%s ",output[i]);
    
    return 0;
}
