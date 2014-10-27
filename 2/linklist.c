#include<stdio.h>
#include<stdlib.h>
typedef struct LNode{
	int data;
	struct LNode *next;
}LNode;

LNode *createLinkList(LNode *L)
{
	LNode *p;
	L = (LNode *)malloc(sizeof(LNode));
	L->data = 0;
	L->next = NULL;
	return L;
}

void printLink(LNode *L)
{
	LNode *p = L;
	if(p->data != 0){
		p->data = 0;	
	}
	printf("%d ->",p->data);
	while(p->next != NULL){
		printf("%d ->",p->data);
	}
}

int main(int argc, char **argv)
{
	int  a = 1;	
	LNode *head;
	head = createLinkList(head);
	head->data++;
	printLink(head);
	return 0;
}

