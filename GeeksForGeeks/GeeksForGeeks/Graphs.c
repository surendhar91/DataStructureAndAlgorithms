// dumb code with smart data structure is better than smart code with dumb data structure
#include <queue.h>
#include <stack.h>
#include <SinglyLinkedList.h>
#include <DoublyLinkedList.h>
#include <stdio.h>
#include <BinaryTree.h>
#include <commonOperations.h>
#include <Graphs.h>
struct AdjListNode* createAdjListNode(int dest){
		
	struct AdjListNode* node = (struct AdjListNode*)malloc(sizeof(struct AdjListNode));
	node->dest = dest;
	node->next = NULL;
	return node;
}
struct Graph* createGraph(int vertices){
		
	struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
	graph->V = vertices;
	graph->array = (struct AdjList *)malloc(vertices*sizeof(struct AdjList));
	int i=0;
	for(i=0;i<graph->V;i++){
		graph->array[i].head = NULL;
	}
	return graph;
}
void addEdge(struct Graph* graph, int src, int dest){
	
	struct AdjListNode* destNode = createAdjListNode(dest);
	destNode->next = graph->array[src].head;//add the destination node to source's linked list, at the beginning
	graph->array[src].head = destNode;
	
	//Given it's an undirected graph, we are going to add from src to destination also
	struct AdjListNode* srcNode = createAdjListNode(src);
	srcNode->next = graph->array[dest].head;
	graph->array[dest].head = srcNode;
	
}
void printGraph(struct Graph* graph){
	int i=0;
	for(i=0;i<graph->V;i++){
		printf("\nAdjacency list for vertex v %d is\n",i);
		struct AdjListNode* head = graph->array[i].head;//get the head element
		while(head){
				printf("-> %d",(head)->dest);
				head=head->next;
		}
	}
}
void addEdgeAndVertexTestData(){
		// create the graph given in above fugure
    int V = 5;
    struct Graph* graph = createGraph(V);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);
 
    // print the adjacency list representation of the above graph
    printGraph(graph);
	/*
	 * Pros: Saves space O(|V|+|E|) . In the worst case, there can be C(V, 2) number of edges in a graph thus consuming O(V^2) space. 
	 * Adding a vertex is easier.
	   
	    * Cons: Queries like whether there is an edge from vertex u to vertex v are not efficient and can be done O(V).
	 * 
	 * */
}
void graphTestData(){
	addEdgeAndVertexTestData();
}