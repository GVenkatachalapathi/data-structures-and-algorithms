#include<stdio.h>
#include<stdlib.h>
struct nodes
{
	int data;
	struct nodes*next;
};
int main()
{
	struct nodes *head,*node1,*node2,*node3;
	head=(struct nodes*)malloc(sizeof(struct nodes));
    node1=(struct nodes*)malloc(sizeof(struct nodes));
    node2=(struct nodes*)malloc(sizeof(struct nodes));
    node3=(struct nodes*)malloc(sizeof(struct nodes));
    node1->data=10;
    node1->next=NULL;
    head=node1;
    printf("%d",node1->data);
    node2->data=20;
    node2->next=NULL;
    node1->next=node2;
    printf(" %d",node2->data);
    node3->data=30;
    node3->next=NULL;
    node2->next=node3;
    printf(" %d",node3->data);
    struct nodes *newNode;
    newNode = (struct nodes*)malloc(sizeof(struct nodes));
    newNode->data = 4;
    newNode->next = node1;
    head = newNode;
    printf(" %d",newNode);
}