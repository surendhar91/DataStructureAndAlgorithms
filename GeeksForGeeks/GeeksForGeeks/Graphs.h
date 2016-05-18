#ifndef GRAPHS_H_
#define	GRAPHS_H_
struct AdjListNode{
	int dest;
	struct AdjListNode* next;
};
struct AdjList{
	struct AdjList* head;
};
struct Graph{
	int V; //Number of vertices
	struct AdjList* array;
};
#endif