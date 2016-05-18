/*


Problem Statement

Given N integers, count the number of pairs of integers whose difference is K.

Input Format
The first line contains N and K.
The second line contains N numbers of the set. All the N numbers are unique.

Output Format
An integer that tells the number of pairs of integers whose difference is K.

Constraints:
N?105
0<K<109
Each integer will be greater than 0 and at least K smaller than 231?1.

Sample Input #00:

5 2  
1 5 3 4 2  

Sample Output #00:

3

Sample Input #01:

10 1  
363374326 364147530 61825163 1073065718 1281246024 1399469912 428047635 491595254 879792181 1069262793 

Sample Output #01:

0


*/import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    static int pairs(int[] a,int k) {
      /* Complete this function */
        HashMap<Integer,Boolean> map=new HashMap<Integer,Boolean>();
        for(int i=0;i<a.length;i++){
            map.put(a[i],false);
        }
        int count=0;
        for(Map.Entry<Integer,Boolean> entry:map.entrySet()){
            int key=entry.getKey();
            boolean value=entry.getValue();
            if(map.get(key-k)!=null){
                map.put(key-k,true);count++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int res;
        
        String n = in.nextLine();
        String[] n_split = n.split(" ");
        
        int _a_size = Integer.parseInt(n_split[0]);
        int _k = Integer.parseInt(n_split[1]);
        
        int[] _a = new int[_a_size];
        int _a_item;
        String next = in.nextLine();
        String[] next_split = next.split(" ");
        
        for(int _a_i = 0; _a_i < _a_size; _a_i++) {
            _a_item = Integer.parseInt(next_split[_a_i]);
            _a[_a_i] = _a_item;
        }
        
        res = pairs(_a,_k);
        System.out.println(res);
    }
}
