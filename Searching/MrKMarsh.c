#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int min(int a,int b){
		if(a<b)
			return a;
		else
			return b;
	}
int max(int a,int b){
		if(a>b)
			return a;
			else return b;
	}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
        
        int m,n;
        scanf("%d",&m);
        scanf("%d",&n);
        char matrix[m][n];
        int upper[m][n];
        int left[m][n],k;
        int i,j,leftIndex=0,rightIndex=0,minValue=0,max_par=0;
        int vector[n];
        for(i=0;i<n;i++){
            upper[0][i]=0;
        }
        for(j=0;j<m;j++){
            left[j][0]=0;
        }
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                //matrix[i][j]=getchar();
                scanf(" %c",&matrix[i][j]);
				//printf("%c",matrix[i][j]);
                if(i!=0){
                    upper[i][j]=upper[i-1][j]+1;
                    
                }
                if(j!=0){
                    left[i][j]=left[i][j-1]+1;
                }
                //printf("%c",matrix[i][j]);
                if(matrix[i][j]==120){//printf("%d i %d j",i,j);
                    upper[i][j]=-1;left[i][j]=-1;
                }
            }    
            
        }
       /* for(i=0;i<m;i++){
            for(j=0;j<n;j++)
                printf("%d ",left[i][j]);
            printf("\n");
        }*/
    
        
        for(i=0;i<m;i++){
            for(j=i+1;j<m;j++)
            {
                int height=j-i;
                int size=0;
                for(k=0;k<n;k++){
                   if(upper[j][k]>=height){
                       vector[size++]=k;
                      // printf("%d ",vector[size-1]);
                   }
                }
                leftIndex=0;
                for(rightIndex=0;rightIndex<size;rightIndex++){
					int valueObt=min(left[i][vector[rightIndex]],left[j][vector[rightIndex]]);
					//printf("%d",valueObt);
                    minValue=vector[rightIndex]-valueObt;
                    while(vector[leftIndex]<minValue){
                        leftIndex++;
                    }
                    if(vector[rightIndex]>vector[leftIndex]){
                        max_par=max(max_par,2*(vector[rightIndex]-vector[leftIndex])+2*(height));
                    }
                    
                }
                
            }    
            
        }
        if(max_par<=0){
            printf("impossible");
        }else{
            printf("%d",max_par);
        }
    return 0;
}
