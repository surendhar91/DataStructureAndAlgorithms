import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in=new Scanner(System.in);
        int testCases=in.nextInt();
        
        for(int i=0;i<testCases;i++){
           // System.out.print(i);
            //Map<Integer,ArrayList<Integer>> priceVsIndexList=new HashMap<Integer,ArrayList<Integer>>();
            int totalSum=in.nextInt();
            int numberOfIntegers=in.nextInt();
            int arr[]=new int[numberOfIntegers+1];
            arr[0]=0;
            for(int j=1;j<numberOfIntegers+1;j++){
                
                arr[j]=in.nextInt();
            }
            
            for(int j=1;j<numberOfIntegers+1;j++){
              for(int k=j+1;k<numberOfIntegers+1;k++){
                  if(arr[j]+arr[k]==totalSum)
                    System.out.print(j+" "+k);
              } 
            }
            System.out.println();
            
        }
    }
}
