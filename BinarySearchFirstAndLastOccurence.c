#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void printArray(int *ar,int size){
    int i=0;
    
    for(i=0;i<size;i++){
        
        printf("%d ",ar[i]);
    }printf("\n");
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
        //printArray(ar,size);
		quickSort(ar,low,pivot-1,size);
        //printArray(ar,low,pivot-1);
        quickSort(ar,pivot+1,high,size);
	//	printf("Low %d high %d",low,high);
        
        
    }
    

}
int getFirstOccurence(int arr[],int low,int high,int numberToSearch,int n){
	int mid;
	if(high>=low){
			mid=low+(high-low)/2;
			if((mid==0||numberToSearch>arr[mid-1])&&arr[mid]==numberToSearch){
					return mid;
			}
			if(numberToSearch>arr[mid]){
				return getFirstOccurence(arr,mid+1,high,numberToSearch,n);
			}else{
				return getFirstOccurence(arr,low,mid-1,numberToSearch,n);
			}
				
			
	}
	return -1;
}
int getLastOccurence(int arr[],int low,int high,int numberToSearch,int n){
	int mid;
	if(high>=low){
			mid=low+(high-low)/2;
			if((mid==n-1||numberToSearch<arr[mid+1])&&arr[mid]==numberToSearch){
					return mid;
			}
			else if(numberToSearch<arr[mid]){
				return getLastOccurence(arr,low,mid-1,numberToSearch,n);
			}else{
				return getLastOccurence(arr,mid+1,high,numberToSearch,n);
			}
				
			
	}
	return -1;
	}
int main() {
    

    //Scanner in = new Scanner(System.in);
    int t,i,n,j,k;
    long long count=1,diff=0;
	int firstIndex,lastIndex;
    scanf("%d",&t);
    for(i=0;i<t;i++){
		//count=1;
		count=0;
        scanf("%d",&n);
        int ar[n],output[n],size=0;
        for(j=0;j<n;j++){
            scanf("%d",&ar[j]);
                //ar[j]=in.nextInt();
                //System.err.println(ar[j]);
        }
        quickSort(ar,0,n-1,n);
        for(j=0;j<n-1;){
     //       if(ar[j]==ar[j+1]){
		//			count++;
			//		count=count*(count-1);
			//}
			firstIndex=getFirstOccurence(ar,j,n-1,ar[j],n);
			if(firstIndex!=-1){
				lastIndex=getLastOccurence(ar,firstIndex,n-1,ar[j],n);	
				diff=(lastIndex-firstIndex)+1;
                if(diff>1){
                    count+=diff*(diff-1);
                }
				j+=lastIndex+1;
			}
            
        }
        //if(count==1)printf("%d\n",count-1);
        //else
        
        printf("%d\n",count);
           // long c = insertSort(ar);      
            //System.out.println(c);
   }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
