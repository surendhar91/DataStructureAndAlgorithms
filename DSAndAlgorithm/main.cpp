#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Graph{
    public:
    static const int size=101;
    int m,n;
    char matrix[size][size];
    bool vis[size][size];
    int par[size][size][2];
    int sourceI,sourceJ;
    int destinationI,destinationJ;
    int X[4]={1,-1,0,0};
    int Y[4]={0,0,-1,1};
    Graph(int m,int n);
    void DFSUtil(int i,int j,int prevI,int prevJ);
    bool isValid(int i,int j);
};
Graph::Graph(int m,int n){
    this->m=m;
    this->n=n;
   // matrix=new char[size][size];
   // vis=new bool[size][size];
   // par=new int[size][size][2];
}
bool Graph::isValid(int i,int j){
    return i>=0&&j>=0&&i<this->m&&j<this->n&&this->matrix[i][j]!='X';
}
void Graph::DFSUtil(int i,int j,int prevI,int prevJ){
    
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

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t,k;
    int m,n;
    cin>>t;
    for(int noOfTest=0;noOfTest<t;noOfTest++){
		int fr,fc;
        cin>>m>>n;
        Graph graph(m,n);
		fr=fc=graph.sourceI=graph.sourceJ=graph.destinationI=graph.destinationJ=-1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>graph.matrix[i][j];
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
        cin>>k;      
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
        cout<<((k==0)?"Impressed":"Oops!")<<endl;
    }
    return 0;
}
