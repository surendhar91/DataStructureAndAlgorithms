#include <DoublyLinkedList.h>
#include <stdio.h>
//Circular linked list
struct DllNode* appendTwoDll(struct DllNode* a,struct DllNode *b){
		
	struct DllNode* aLast;
	struct DllNode* bLast;
	
	if(a==NULL)return b;//If a is null, then return b
	if(b==NULL) return a;//if b is null, then return a.
	
	aLast=a->prev; //Last node in a List
	bLast=b->prev; //Last node in b list
	
	joinDllNodes(aLast, b); //a last joining to b
	joinDllNodes(bLast, a);//b last joining to a.
	
	return a;
	
}
void joinDllNodes(struct DllNode* nodeA,struct DllNode *nodeB){
	nodeA -> next = nodeB;
	nodeB -> prev = nodeA;
}
void printDllList(struct DllNode* head){
	struct DllNode* top = head;
//	head=head->next;
	while(head!=NULL){//circular dll list.
		printf("%d  ",head->data);
		head=head->next;
		if(head==top)
			break;
	}
}
int countDllNodes(struct DllNode* head){
	struct DllNode* top = head;
	int i = 0;
//	head=head->next;
	while(head!=NULL){//circular dll list.
		printf("%d  ",head->data);
		i++;
		head=head->next;
		if(head==top)
			break;
	}
	return i;
}

/* Function to insert a node at the beginging of the Doubly Linked List */
void pushDll(struct DllNode** head_ref, int new_data)
{
    /* allocate node */
    struct DllNode* new_node =
            (struct DllNode*) malloc(sizeof(struct DllNode));
 
    /* put in the data  */
    new_node->data  = new_data;
 
    /* since we are adding at the begining,
      prev is always NULL */
    new_node->prev = NULL;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* change prev of head node to new node */
    if((*head_ref) !=  NULL)
      (*head_ref)->prev = new_node ;
 
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}
void preOrderDllTraversal(struct DllNode* node){
		/* A utility function to print preorder traversal of BST */
    if (node == NULL)
        return;
    printf("%d ", node->data);
    preOrderDllTraversal(node->prev);
    preOrderDllTraversal(node->next);

}