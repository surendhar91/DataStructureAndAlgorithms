#include<map>
#include<vector>
#include<stdlib.h>
#include<binarysearchtree.h>
#include<queue>
#include<stack>
using namespace std;
struct btnode{
	int data;
	int lcount;
	
	struct btnode* left;
	struct btnode* right;
};
btnode* newBTNode(int data){
		btnode* node = new btnode;
		node->left = node->right = NULL;
		node->data = data;
		node->lcount = 0;
}
btnode* insertBTNode(btnode* root,int data){
	
	if(root==NULL){
		return newBTNode(data);
	}
	if(data<root->data){
		root->lcount++;
		root->left = insertBTNode(root->left,data);
	}
	if(data>root->data){
		root->right = insertBTNode(root->right,data);
	}
	return root;
}
btnode* findKthSmallestElemInBST(btnode* root,int k){

	if(root){
	
		if(k==(root->lcount+1)){//if k is equal to N + 1, then root is the kth smallest element
		//where N is the number of nodes in the left subtree.
			return root;
		}else if(k > (root->lcount)){
			return findKthSmallestElemInBST(root->right, k - (root->lcount+1));
		}else{
			return findKthSmallestElemInBST(root->left, k);
		}
		
	}else{
		return NULL;
	}
	
}
void binarySearchTestData(){
	
		/* just add elements to test */
    /* NOTE: A sorted array results in skewed tree */
    int ele[] = { 20, 8, 22, 4, 12, 10, 14 };
    int i;
    btnode* root = NULL;
 
    /* Creating the tree given in the above diagram */
    for(int i=0;i<7;i++){
		root = insertBTNode(root,ele[i]);
	}
 
    /*  It should print the sorted array */
    for(i = 1; i <=7; i++)
    {
        cout<<"\n kth smallest elment for k = "<<i<<" is "<<findKthSmallestElemInBST(root, i)->data;
    }
 
}