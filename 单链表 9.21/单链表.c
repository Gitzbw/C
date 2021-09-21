#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#define N 5

typedef struct _Node
{
	int data;
	struct _Node* next;
}Node_t;
static Node_t*  AllocNode(int x)
{
	Node_t* n = (Node_t*)malloc(sizeof(Node_t));
	n->data = x;
	n->next = NULL;
}
void InsertList_head(Node_t* head, int x)
{
	Node_t* p = AllocNode(x);
	Node_t* n = head->next;
	head->next = p;
	p->next = n;
}


void InsertList_tail(head, x)
{
	Node_t* end = head;
	while (end->next)
	{
		end = end->next;
	}
	end->next = AllocNode(x);
}

void DeleteList_head(Node_t* head)
{
	Node_t* n = head->next;
	head->next = n->next;
	free(n);
}

void ShowList(Node_t* head)
{
	Node_t* p = head->next;
	while (p)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

int main(void)
{
	Node_t* head = AllocNode(0);
	int i = 1;
	for (i = 1; i <= N; i++)
	{
		InsertList_head(head,i);
		ShowList(head);
		Sleep(1000);
	}
	for (i = 1; i <= N; i++)
	{
		DeleteList_head(head);
		ShowList(head);
		Sleep(1000);
	}
	for (i = 1; i <= N; i++)
	{
		InsertList_tail(head, i);
		ShowList(head);
		Sleep(1000);
	}
	for (i = 1; i <= N; i++)
	{
		DeleteList_head(head);
		ShowList(head);
		Sleep(1000);
	}
	free(head);
	return 0;
}