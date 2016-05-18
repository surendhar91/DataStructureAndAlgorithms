/*


Problem Statement

Atul is into graph theory, and he is learning about trees nowadays. He observed that the removal of an edge from a given tree T will result in the formation of two separate trees, T1 and T2.

Each vertex of the tree T is assigned a positive integer. Your task is to remove an edge, such that the Tree_diff of the resultant trees is minimized. Tree_diff is defined as the following:

 F(T) = Sum of numbers written on each vertex of a tree T
 Tree_diff(T) = abs(F(T1) - F(T2))

Input Format
The first line will contain an integer N, i.e. the number of vertices in the tree.
The next line will contain N integers separated by a single space, i.e. the values assigned to each of the vertices.
The next N?1 lines contain a pair of integers eah, separated by a single space, that denote the edges of the tree.
In the above input, the vertices are numbered from 1 to N.

Output Format
A single line containing the minimum value of Tree_diff.

Constraints
3?N?105
1? number written on each vertex ?1001

Sample Input

6
100 200 100 500 100 600
1 2
2 3
2 5
4 5
5 6

Sample Output

400

Explanation

Originally, we can represent tree as

         1(100)
          \
           2(200)
          / \
    (100)5   3(100)
        / \
  (500)4   6(600)

Cutting the edge at 1 2 would result in Tree_diff = 1500-100 = 1400
Cutting the edge at 2 3 would result in Tree_diff = 1500-100 = 1400
Cutting the edge at 2 5 would result in Tree_diff = 1200-400 = 800
Cutting the edge at 4 5 would result in Tree_diff = 1100-500 = 600
Cutting the edge at 5 6 would result in Tree_diff = 1000-600 = 400

Hence, the answer is 400.


*/import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
class Graph{
    
    int V,E;
    ArrayList<Integer> edgeAdjList[];
    int valueForNodes[];
    int sumOfChildren[];
    boolean visited[];
    Graph(int V){
        edgeAdjList=(ArrayList<Integer>[])new ArrayList<?>[V+1];
        visited=new boolean[V+1];
        valueForNodes=new int[V+1];
        for(int i=1;i<=V;i++){
            edgeAdjList[i]=new ArrayList();
        }
        sumOfChildren=new int[V+1];
        for(int i=0;i<=V;i++){
            sumOfChildren[i]=0;
        }
    }
    void addEdge(int x,int y){
        edgeAdjList[x].add(y);
        edgeAdjList[y].add(x);
    }
    void addValueForNode(int Vertex,int Value){
        valueForNodes[Vertex]=Value;
        visited[Vertex]=false;
    }
    
    int DFS(int Vertex){
        
        if(visited[Vertex]){
            return 0;
        }else{
            visited[Vertex]=true;
            List<Integer> adjListForVertex=edgeAdjList[Vertex];
            int c=valueForNodes[Vertex];
            for(int i=0;i<adjListForVertex.size();i++){
                c+=DFS(adjListForVertex.get(i));
           //     System.out.println(adjListForVertex.get(i)+" c "+c);
            }
         //   System.out.println("End of Vertex "+Vertex);
            sumOfChildren[Vertex]=c;
        //    System.out.println(Vertex+" Sum "+sumOfChildren[Vertex]);
            return sumOfChildren[Vertex];
        }
        
    }
    
}
public class Solution {

    static int diff(int sum,int value){
        return Math.abs(sum-(2*value));
    }
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in=new Scanner(System.in);
        int V=in.nextInt();
        Graph graph=new Graph(V);
        int sumOfValues=0;
        for(int i=1;i<=V;i++){
            int value=in.nextInt();
            sumOfValues+=value;
            graph.addValueForNode(i,value);
        }
        for(int i=1;i<=V-1;i++){
            graph.addEdge(in.nextInt(),in.nextInt());
        }
        int root=1;
        for(int i=1;i<=V;i++){
            if(graph.edgeAdjList[i].size()>1){
                root=i;break;
            }
        }
      //  System.out.println("Root"+root);
       /* for(int i=1;i<=V;i++){
            System.out.println(graph.edgeAdjList[i]);
        }*/
        int c=graph.DFS(root);
        for(int i=1;i<=V;i++){
            
            graph.sumOfChildren[i-1]=diff(sumOfValues,graph.sumOfChildren[i]);
           // System.out.println(graph.sumOfChildren[i-1]);
        }
        /*for(int i=1;i<=V;i++){
            System.out.println(i+"Vertex"+graph.sumOfChildren[i-1]);
        }*/
        Arrays.sort(graph.sumOfChildren,0,V);
        System.out.println(graph.sumOfChildren[0]);
    }
}