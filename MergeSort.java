import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        
        for(int i=0;i<t;i++){
            int n = in.nextInt();
            int[] ar = new int[n+2];
			ar[0]=0;
			ar[n+1]=1000001;
            for(int j=0;j<n;j++){
                ar[j]=in.nextInt();
                //System.err.println(ar[j]);
            }
            insertSort(ar);      
            //System.out.println(c);
        }
}
    
    
    public static void insertSort(int[] ar)
    {
        long count = 0;
        // Compute the required count
        int temp[]=new int[ar.length];
        mergeSort(ar,temp,0,ar.length-1);
        //return count;
        
    }
    static void mergeSort(int arr[],int temp[],int start,int end){
       int mid=(end+start)/2;
	   long inversions=0;
	   if(start<end){
			mergeSort(arr,temp,start,mid);
			mergeSort(arr,temp,mid+1,end);
			merge(arr,temp,start,mid+1,end);
	   }
		//return inversions;
	}
    static void merge(int arr[],int temp[],int start,int mid,int end){
	
		 int i,j,k;
         long inversions=0;
		 i=start;
		 k=start;
		 j=mid;
		 
		 while(i<=mid-1&&j<=end){
			 
				if(arr[i]<=arr[j]){
					temp[k++]=arr[i++];
				}
					else if(arr[i]>arr[j]){
						temp[k++]=arr[j++];
						//inversions+=mid-i;
				}
			 
		  }
		  while(i<=mid-1){
			 temp[k++]=arr[i++];
		  }
		  while(j<=end){
				temp[k++]=arr[j++];
		  }
		  for(i=start;i<=end;i++)
		  {
			 arr[i]=temp[i];			} 
	       //return inversions;
    }
   
    
    
}
