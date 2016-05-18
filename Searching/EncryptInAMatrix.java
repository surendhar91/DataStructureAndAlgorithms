import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner bin=new Scanner(System.in);
        String stringToEncode=bin.next();
        int length=stringToEncode.length();
        double sqrtLength=Math.sqrt(length);
        int min=length+10;
        int minRow=0,minCol=0;
        for(int row=(int)Math.floor(sqrtLength);row<=(int)Math.ceil(sqrtLength);row++){
           // System.out.print("Floor "+Math.floor(sqrtLength));
        //    System.out.print("Ceil "+Math.ceil(sqrtLength));
            //int col=length/row;
           // System.out.print("Col "+col);
            for(int col=row;col<=Math.ceil(sqrtLength);col++){
                   if((row*col)>=length&&min>(row*col)){
                        minRow=row;minCol=col;
                        min=row*col;
                   }
   
            }
           /* if(row<=col&&((row*col)>=length)&&col<=(int)Math.ceil(sqrtLength)){
                if((row*col)<min){
                    min=row*col;minRow=row;minCol=col;
                }
            }*/
            
        }
        char matrix[][]=new char[minRow][minCol];int size=0;
        for(int i=0;i<minRow;i++){
            for(int j=0;j<minCol;j++){
                matrix[i][j]=(char)-1;
                if(size<length){
                   
                    matrix[i][j]=stringToEncode.charAt(size);
                  //  System.out.print(matrix[i][j]+" ");
                    size++;
                }
            }
           // System.out.println();
        }
       // System.out.println("MinRow "+minRow+"MinCol "+minCol);
        for(int j=0;j<minCol;j++)
            {
            for(int i=0;i<minRow;i++){if(matrix[i][j]!=(char)-1){System.out.print(matrix[i][j]);}}
            if(j!=minCol-1)System.out.print(" ");
        }
    }
}