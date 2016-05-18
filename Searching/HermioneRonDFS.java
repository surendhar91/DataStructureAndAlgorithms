/*


Problem Statement

Hermione Granger is lost in the Forbidden Forest while collecting some herbs for a magical potion. The forest is magical and has only one exit point, which magically transports her back to the Hogwarts School of Witchcraft and Wizardry.
The forest can be considered as a grid of N×M size. Each cell in the forest is either empty (represented by '.') or has a tree (represented by 'X'). Hermione can move through empty cells, but not through cells with a tree in it. She can only travel LEFT, RIGHT, UP, and DOWN. Her position in the forest is indicated by the marker 'M' and the location of the exit point is indicated by '*'. Top-left corner is indexed (0, 0).

.X.X......X
.X*.X.XXX.X
.XX.X.XM...
......XXXX.

In the above forest, Hermione is located at index (2, 7) and the exit is at (1, 2). Each cell is indexed according to Matrix Convention

She starts her commute back to the exit, and every time she encounters more than one option to move, she waves her wand and the correct path is illuminated and she proceeds in that way. It is guaranteed that there is only one path to each reachable cell from the starting cell. Can you tell us if she waved her wand exactly K times or not? Ron will be impressed if she is able to do so.

Input Format
The first line contains an integer T; T test cases follow.
Each test case starts with two space-separated integers, N and M.
The next N lines contain a string, each having a length of M, which represents the forest.
The last line of each single test case contains integer K.

Output Format
For each test case, if she could impress Ron then print Impressed, otherwise print Oops!.

Constraints
1?T?10
1?N,M?100
0?K?10000
There is exactly one 'M' and one '*' in the graph.
Exactly one path exists between 'M' and '*.'

Sample Input

3
2 3
*.M
.X.
1
4 11
.X.X......X
.X*.X.XXX.X
.XX.X.XM...
......XXXX.
3
4 11
.X.X......X
.X*.X.XXX.X
.XX.X.XM...
......XXXX.
4

Sample Output

Impressed
Impressed
Oops!

Explanation

Case 1: Hermione waves her wand at (0,2), hence #Wand waved = K = 1.
Case 2: Hermione waves her wand at (2,9) (0,5), and (3,3), hence #Wand waved = K = 3.
Case 3: Same as above. But here K = 4, which doesn't match the number of times her wand is waved.


*/import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
class Graph{
    
    static int size=101;
    int m,n;
    char matrix[][]=new char[size][size];
    boolean vis[][]=new boolean[size][size];
    int par[][][]=new int[size][size][2];
    int sourceI,sourceJ;
    int destinationI,destinationJ;
    int X[]={1,-1,0,0};
    int Y[]={0,0,-1,1};
    
Graph(int m,int n){
    this.m=m;
    this.n=n;
   // matrix=new char[size][size];
   // vis=new bool[size][size];
   // par=new int[size][size][2];
}
boolean isValid(int i,int j){
    return i>=0&&j>=0&&i<this.m&&j<this.n&&this.matrix[i][j]!='X';
}
void DFSUtil(int i,int j,int prevI,int prevJ){
    
    if(!isValid(i,j)){
        return ;
    }
    if(vis[i][j])
        return;
    vis[i][j]=false;
    par[i][j][0]=prevI;
    par[i][j][1]=prevJ;    
    for(int k=0;k<4;k++){
            if(i+X[k]!=prevI||j+Y[k]!=prevJ)
            DFSUtil(i+X[k],j+Y[k],i,j);
    }
    vis[i][j]=true;
  }
}
public class Solution {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   public static void main(String[] args){
    int t,k;
    int m,n;
    Scanner in=new Scanner(System.in);
    t=in.nextInt();
    for(int noOfTest=0;noOfTest<t;noOfTest++){
		int fr,fc;
        m=in.nextInt();
        n=in.nextInt();
        Graph graph=new Graph(m,n);
		fr=fc=graph.sourceI=graph.sourceJ=graph.destinationI=graph.destinationJ=-1;
        for(int i=0;i<m;i++){
            String line=in.next();
            for(int j=0;j<line.length();j++){
                graph.matrix[i][j]=line.charAt(j);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                //cin>>graph.matrix[i][j];
                if(graph.matrix[i][j]=='M'){
                    graph.sourceI=i;
                    graph.sourceJ=j;
                }else if(graph.matrix[i][j]=='*'){
                    graph.destinationI=i;
					fr=i;fc=j;
                    graph.destinationJ=j;
                }
            }
        }
        k=in.nextInt();
        graph.DFSUtil(graph.sourceI,graph.sourceJ,-1,-1);
        int r=graph.par[graph.destinationI][graph.destinationJ][0],c=graph.par[graph.destinationI][graph.destinationJ][1];
        //cout<<graph.par[2][3][0]<<graph.par[2][3][1];
		while(r!=graph.sourceI||c!=graph.sourceJ){
            int count=0;
            for(int f=0;f<4;f++){
                if(graph.isValid(r+graph.X[f],c+graph.Y[f])){
                    count++;
                }
            }
            if(count>2){
                k--;
            }
            fr=graph.par[r][c][0];
            fc=graph.par[r][c][1];
            r=fr;
			c=fc;
        }
        
        int count=0;
        for(int f=0;f<4;f++){
                if(graph.isValid(r+graph.X[f],c+graph.Y[f])){
                    count++;
                }
        }
        if(count>1)k--;
        System.out.println(((k==0)?"Impressed":"Oops!"));
    }
   
    }
}
