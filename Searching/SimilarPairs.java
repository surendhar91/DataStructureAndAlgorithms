import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
class Graph{
    
    int V,E;
    ArrayList<Integer> edgeAdjList[];
    boolean visited[];
    Graph(int V){
        edgeAdjList=(ArrayList<Integer>[])new ArrayList<?>[V+1];
        visited=new boolean[V+1];
        for(int i=1;i<=V;i++){
            edgeAdjList[i]=new ArrayList();
            visited[i]=false;
        }
        
    }
    void addEdge(int x,int y){
        edgeAdjList[x].add(y);
        edgeAdjList[y].add(x);
    }
    
    int DFS(int Vertex,int T){
        
        if(visited[Vertex]){
            return 0;
        }else{
            visited[Vertex]=true;
            List<Integer> adjListForVertex=edgeAdjList[Vertex];
            int c=0;
            for(int i=0;i<adjListForVertex.size();i++){
                if(Math.abs(adjListForVertex.get(i)-Vertex)<=T)
                c+=DFS(adjListForVertex.get(i),T);
                if()
           //     System.out.println(adjListForVertex.get(i)+" c "+c);
            }
         //   System.out.println("End of Vertex "+Vertex);
           // sumOfChildren[Vertex]=c;
        //    System.out.println(Vertex+" Sum "+sumOfChildren[Vertex]);
            return c;
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