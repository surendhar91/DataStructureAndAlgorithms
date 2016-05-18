/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package dsandalgorithm;

/**
 *
 * @author surendhar-2481
 */
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


import java.util.Arrays;
import java.util.Scanner;
import static sun.nio.cs.Surrogate.high;
import static sun.nio.cs.Surrogate.low;

/**
 *
 * @author surendhar-2481
 */
public class Solution {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int arr[]=new int[n+2];
        int low,high;
        arr[0]=0;arr[1]=0;arr[n+1]=1000001;
        for(int i=1;i<=n;i++){
            arr[i]=in.nextInt();
        }
        String result=sortInOrder(arr, 1, n, false);
        if(result.contains("swap")||result.contains("reverse")){
            System.out.println("yes");
            System.out.println(result);
        }else if(result.contains("Failed")){
            System.out.println("no");
        }else{
            System.out.println("yes");
        }
    }
    static String sortInOrder(int arr[],int low,int high,boolean swappedAlready){
        
        int mid;
        
        if(high>=low){
            mid=low+(high-low)/2;
            if(arr[low]<arr[mid]&&arr[high]>arr[mid]){
                return sortInOrder(arr,low+1,high-1,swappedAlready);
            }else if(arr[low]<arr[mid]&&!swappedAlready){
                return sortInOrder(arr,low+1,high,swappedAlready);
            }else if(arr[high]>arr[mid]&&!swappedAlready){
                return sortInOrder(arr, low, high-1, swappedAlready);
            }else if(arr[low]>arr[high]&&arr[low-1]<arr[high]&&arr[high+1]>arr[low]&&!swappedAlready){
                int temp=arr[low];arr[low]=arr[high];arr[high]=temp;
                if(sortInOrder(arr, low+1, high-1,true).contains("Success")){
                    return "swap "+low+" "+high;
                }else if(IsSorted(arr, low+1, high-1)){
                    return "reverse "+low+" "+high;
                }else{
                    return "Failed";
                }
            }else if(low!=high){
                return "Failed";
            }
        }
        return "Success";
        
    }
     static boolean IsSorted(int[] arr,int low,int high)
    {
        for (int i = high; i > low; i--)
        {
            if (arr[i - 1] < arr[i])
            {
                return false;
            }
        }
        return true;
    }
}

