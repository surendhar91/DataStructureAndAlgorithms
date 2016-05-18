import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in=new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            
            long radius=in.nextLong();
            long k=in.nextLong();
            long count=0;
            long sqrtRadius=(long)(Math.sqrt(radius));
            for(long x=1;x<=sqrtRadius;x++){
                long x_sqr=x*x;
                long y=(long)(Math.sqrt(radius-(x*x)));//x^2+y^2=r^2
                //y=sqrt(r^2-x^2)
                
                long y_sqr=y*y;
                long currentSum=x_sqr+y_sqr;
                if(currentSum==radius)count+=4;
                
            }
            if(count<=k)System.out.println("possible");
            else System.out.println("impossible");
            
        }
    }
}