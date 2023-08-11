#include<stdio.h>
#include<stdlib.h>
struct nodes
{
	int data;
	struct nodes*next;
};
int main()
{
struct nodes *head,*node1,*node2,*node3,*node4,*node5,*node6,*node7,*node8,*node9,*node10;
head=(struct nodes*)malloc(sizeof(struct nodes));
node1=(struct nodes*)malloc(sizeof(struct nodes));
node2=(struct nodes*)malloc(sizeof(struct nodes));
node3=(struct nodes*)malloc(sizeof(struct nodes));
node4=(struct nodes*)malloc(sizeof(struct nodes));
node5=(struct nodes*)malloc(sizeof(struct nodes));
node6=(struct nodes*)malloc(sizeof(struct nodes));
node7=(struct nodes*)malloc(sizeof(struct nodes));
node8=(struct nodes*)malloc(sizeof(struct nodes));
node9=(struct nodes*)malloc(sizeof(struct nodes));
node10=(struct nodes*)malloc(sizeof(struct nodes));
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
node4->data=40;
node4->next=NULL;
node3->next=node4;
printf(" %d",node4->data);
node5->data=50;
node5->next=NULL;
node4->next=node5;
printf(" %d",node5->data);
node6->data=60;
node6->next=NULL;
node5->next=node6;
printf(" %d",node6->data);
node7->data=70;
node7->next=NULL;
node6->next=node7;
printf(" %d",node7->data);
node8->data=80;
node8->next=NULL;
node7->next=node8;
printf(" %d",node8->data);
node9->data=90;
node9->next=NULL;
node8->next=node9;
printf(" %d",node9->data);
node10->data=100;
node10->next=NULL;
node9->next=node10;
printf(" %d",node10->data);
struct node *newNode;
newNode = malloc(sizeof(struct nodes));
newNode->data = 4;
newNode->next = head;
head = newNode;
}