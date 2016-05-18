import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner br=new Scanner(System.in);
        int n=br.nextInt();
        HashMap<Integer,ArrayList<String>> keyVsString=new HashMap<Integer,ArrayList<String>>();
        HashMap<Integer,ArrayList<Integer>> keyVsIndex=new HashMap<Integer,ArrayList<Integer>>();
        int count[]=new int[100];
        for(int i=0;i<n;i++){
            int key=br.nextInt();
            if(!keyVsString.containsKey(key)){
                keyVsString.put(key,new ArrayList<String>());
                keyVsIndex.put(key,new ArrayList<Integer>());
            }
            keyVsString.get(key).add(br.next());
            keyVsIndex.get(key).add(i);
            
        }
        
        int mid=n/2;
        StringBuffer sb = new StringBuffer();
        for(int i=0;i<100;i++){
            if(keyVsString.containsKey(i)){
                for(int j = 0;j < keyVsString.get(i).size();j++){
                    int index = keyVsIndex.get(i).get(j);
                    String string = keyVsString.get(i).get(j);
                    if(index < mid)
                       sb.append("-").append(" ");
                    else 
                       sb.append(string).append(" ");
                }
                
            }
            
        }
        System.out.println(sb.toString());
        
    }
}