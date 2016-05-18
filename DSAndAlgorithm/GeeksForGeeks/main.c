#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
	int data;
	struct node *next;
};
int main(int argc, char **argv)
{
	struct node *head;
	head=(struct node *)malloc(sizeof(struct node));
	scanf("%d",&head->data);
	head->next=NULL;
	printf("%d",head->data);
	getchar();
	return 0;
}
