#ifndef BINARYSEARCHTREE_H_
#define	BINARYSEARCHTREE_H_
struct bstnode
{
    int data;
    struct bstnode* left;
    struct bstnode* right;
};
struct bstnode* newBSTNode(int data);
struct bstnode* sortedSinglyLinkedListToBSTRecur(struct node **head_ref, int n);
void preOrderTraversal(struct bstnode *root);
struct bstnode* sortedSinglyLinkedListToBST(struct node *head);
struct DllNode* sortedDllListToBSTRecur(struct DllNode **head_ref, int n);
struct DllNode* sortedDllListToBST(struct DllNode *head);
#endif