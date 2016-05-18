/*


Problem Statement

Sunny and Johnny together have M dollars they want to spend on ice cream. The parlor offers N flavors, and they want to choose two flavors so that they end up spending the whole amount.

You are given the cost of these flavors. The cost of the ith flavor is denoted by ci. You have to display the indices of the two flavors whose sum is M.

Input Format

The first line of the input contains T; T test cases follow.
Each test case follows the format detailed below: The first line contains M. The second line contains N. The third line contains N space-separated integers denoting the price of each flavor. Here, the ith integer denotes ci.

Output Format

Output two integers, each of which is a valid index of a flavor. The lower index must be printed first. Indices are indexed from 1 to N.

Constraints

1?T?50
2?M?10000
2?N?10000
1?ci ?10000,where i?[1,N]
The prices of any two items may be the same and each test case has a unique solution.

Sample Input

2
4
5
1 4 5 3 2
4
4
2 2 4 3

Sample Output

1 4
1 2

Explanation

The sample input has two test cases.
For the 1st, the amount M = 4 and there are 5 flavors at the store. The flavors indexed at 1 and 4 sum up to 4.
For the 2nd test case, the amount M = 4 and the flavors indexed at 1 and 2 sum up to 4.


*/import java.io.*;
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
