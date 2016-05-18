
import java.util.*;
public class Solution {
       
          static void quickSort(int[] ar,int low,int high) {
              int pivotLocation;
              if(low<high){
                  pivotLocation=sortUsingQuick(ar,low,high);
                  //System.out.print("pivot "+pivotLocation);
				  //printArray(ar);
				  quickSort(ar,low,pivotLocation);
				  
                  /*for(int i=low;i<=pivotLocation-1;i++){
                      System.out.print(ar[i]+" ");
                      
                  }*/
                  //System.out.println("");
				 quickSort(ar,pivotLocation+1,high);
                  /*for(int i=pivotLocation+1;i<=high;i++){
                      System.out.print(ar[i]+" ");
                      
                  }*/
				 //System.out.print("low "+low+" high "+high);
                 printArray(ar,low,high); 
              }
			  
                    
       }
	   static int sortUsingQuick(int[] ar,int low,int high){
		List<Integer> smallerValues = new ArrayList<Integer>();
                List<Integer> biggerValues = new ArrayList<Integer>();
                int toPartitionAround = ar[low];
                for(int c=low+1;c<high;c++) {
                    if(ar[c] < toPartitionAround) {
                        smallerValues.add(ar[c]);
                    } else if(ar[c]>toPartitionAround){
                         biggerValues.add(ar[c]);
                    }
                }
      for(int c=0;c<smallerValues.size();c++) {
            ar[low+c] = smallerValues.get(c);
            
          
      }
      ar[smallerValues.size()+low] = toPartitionAround;
      for(int m=0;m<biggerValues.size();m++) {
          ar[low+m+ smallerValues.size() + 1] = biggerValues.get(m);
      }
           return low+smallerValues.size();
      //printArray(ar); 
	  
          }
 
 static void printArray(int[] ar,int low,int high) {
		if(low+1!=high){
         for(int i=low;i<high;i++){
            System.out.print(ar[i]+" ");
         }
           System.out.println("");
		   }
      }
       
      public static void main(String[] args) {
           Scanner in = new Scanner(System.in);
           int n = in.nextInt();
           int[] ar = new int[n];
           for(int i=0;i<n;i++){
              ar[i]=in.nextInt(); 
           }
           quickSort(ar,0,n);
       }    
   }
