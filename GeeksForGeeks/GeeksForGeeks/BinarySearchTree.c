#include <queue.h>
#include <stack.h>
#include <SinglyLinkedList.h>
#include <DoublyLinkedList.h>
#include <stdio.h>
#include <BinaryTree.h>
#include <commonOperations.h>
#include <BinarySearchTree.h>
struct bstnode* newBSTNode(int data){
		
	struct bstnode* Node = (struct bstnode *)malloc(sizeof(struct bstnode));
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;
	
	return Node;
}
void preOrderTraversal(struct bstnode *root){
		
	if(root==NULL){
		return ;
	}
	printf("%d\t",root->data);
	preOrderTraversal(root->left);
	preOrderTraversal(root->right);
}

void inOrderTraversal(struct bstnode *root){
		
	if(root==NULL){
		return ;
	}
	
	inOrderTraversal(root->left);
	printf("%d\t",root->data);
	inOrderTraversal(root->right);
}
struct bstnode* sortedSinglyLinkedListToBSTRecur(struct node **head_ref, int n){
	if(n<=0){
			return NULL;
	}
	
	struct bstnode* leftTree = sortedSinglyLinkedListToBSTRecur(head_ref,n/2);//construct the left subtree of elements size n/2
	
	struct bstnode* root = newBSTNode((*head_ref)->data);
	root->left = leftTree;
	
	*head_ref = (*head_ref)->next; // Move the head pointer ahead in the linked list..
	
	root->right = sortedSinglyLinkedListToBSTRecur(head_ref, n-n/2-1);
	//construct the irght subtree elements recursively..
	
	//total nodes - left tree nodes - root node.
	
	return root;
}

struct bstnode* sortedSinglyLinkedListToBST(struct node *head){
	//get the size of the linked list
	int n = getSizeOfTheList(head);
	//construct the binary search tree recursively.
	return sortedSinglyLinkedListToBSTRecur(&head,n);
}

struct DllNode* sortedDllListToBSTRecur(struct DllNode **head_ref, int n){
	//Bottom to top, constructing the leaves first, then to the root.
	//a Dll node that will also server as binary search tree using in place conversion..
	
	if(n<=0){
			return NULL;
	}
	   /* Recursively construct the left subtree */
	struct DllNode* leftTree = sortedDllListToBSTRecur(head_ref, n/2);
	
	/* head_ref now refers to middle node, make middle node as root of BST*/
	struct DllNode* root 	 = *head_ref;
	root->prev = leftTree;
	
	/* Change head pointer of Linked List for parent recursive calls */
	*head_ref  = (*head_ref)->next;
	
	 /* Recursively construct the right subtree and link it with root
      The number of nodes in right subtree  is total nodes - nodes in
      left subtree - 1 (for root) */
	root->next  = sortedDllListToBSTRecur(head_ref, n-n/2-1);
	
	return root;
}
struct DllNode* sortedDllListToBST(struct DllNode *head){
	/*
	 * In-place conversion of Sorted DLL to Balanced BST
	Given a Doubly Linked List which has data members sorted in ascending order. 
	 * Construct a Balanced Binary Search Tree which has same data members as the given Doubly Linked List.

	The tree must be constructed in-place (No new node should be allocated for tree conversion)
	 * 
	 * 
	 * Method 2 (Tricky) 
The method 1 constructs the tree from root to leaves. In this method, we construct from leaves to root. 
 * The idea is to insert nodes in BST in the same order as the appear in Doubly Linked List, so that the tree can be constructed in O(n) time complexity. 
 * We first count the number of nodes in the given Linked List. Let the count be n. After counting nodes, we take left n/2 nodes and recursively construct the left subtree. 
 * After left subtree is constructed, we assign middle node to root and link the left subtree with root. Finally, we recursively construct the right subtree and link it with root.
 * 
While constructing the BST, we also keep moving the list head pointer to next so that we have the appropriate pointer in each recursive call.
Following is C implementation of method 2. The main code which creates Balanced BST is highlighted.
	 * 
	 * */
	int n = countDllNodes(head);
	
	return sortedDllListToBSTRecur(&head,n);
}

void sortedSinglyLinkedListToBSTRecurTestData(){
	/* Start with the empty list */
    struct node* head = NULL;
 
    /* Let us create a sorted linked list to test the functions
     Created linked list will be 1->2->3->4->5->6->7 */
    push(&head, 7);
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
 
    printf("\n Given Linked List ");
    printList(head);
 
    /* Convert List to BST */
    struct bstnode *root = sortedSinglyLinkedListToBST(head);
    printf("\n PreOrder Traversal of constructed BST ");
    inOrderTraversal(root);
	
}

void sortedDllListToBSTRecurTestData(){
		/* Start with the empty list */
    struct DllNode* head = NULL;
 
    /* Let us create a sorted linked list to test the functions
     Created linked list will be 7->6->5->4->3->2->1 */
    pushDll(&head, 7);
    pushDll(&head, 6);
    pushDll(&head, 5);
    pushDll(&head, 4);
    pushDll(&head, 3);
    pushDll(&head, 2);
    pushDll(&head, 1);
 
    printf("Given Linked List\n");
    printDllList(head);
 
    /* Convert List to BST */
    struct DllNode *root = sortedDllListToBST(head);
	printf("Root node is %d\n",root->data);
    printf("\n PreOrder Traversal of constructed BST \n ");
    preOrderDllTraversal(root);
}

void bstTestData(){
//	sortedSinglyLinkedListToBSTRecurTestData();
//sortedDllListToBSTRecurTestData();
}