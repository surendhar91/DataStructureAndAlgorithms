import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
         /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i=0;
        try{
    Scanner br=new Scanner(System.in);
    n=br.nextInt();
    int a[]=new int[n];
    String output[]=new String[n];
        //int *a=(int *)malloc(sizeof(int)*n);
    int c[]=new int[100];
    String m[]=new String[n];
        //char output[n][10];
    //int *c=(int *)malloc(sizeof(int)*100);
    //char m[n][10];
    for(i=0;i<100;i++)
        c[i]=0;
    for(i=0;i<n;i++){
       // scanf("%d",&a[i]);
        a[i]=br.nextInt();
        m[i]=br.next();
       // scanf("%s",&m[i]);
        
    }
    for(i=0;i<n;i++){
        c[a[i]]++;
    }
    for(i=0;i<100;i++){
        c[i]+=c[i-1];//Adding the previous value
    }
    for(i=0;i<n;i++)
    {
        output[i]="-";    
        
    } //  strcpy(output[i],"-");
    for(i=n-1;i>(n-1)/2;i--){
		//To start from the last, stable.
        //strcpy(output[c[a[i]]-1],m[i]);
        output[c[a[i]]-1]=m[i];
        --c[a[i]];
    }
    
   
    for(i=0;i<n;i++){
        System.out.print(output[i]+" ");
        
    }
       // printf("%s ",output[i]);
    }catch(Exception ex){
            
            System.out.println(ex);
    }
    //return 0;
    }
}