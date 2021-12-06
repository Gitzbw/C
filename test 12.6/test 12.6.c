#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#define N 5

typedef struct Node
{
	int data;
	struct Node* next;
}Node_t;

static Node_t* AllocNode(int x)
{
	Node_t* n = (Node_t*)malloc(sizeof(Node_t));
	n->data = x;
	n->next = NULL;
	return n;
}

void InsertList_head(Node_t* head,int x)
{
	Node_t* p = AllocNode(x);
	Node_t* tmp = head->next;
	p->next = tmp;
	head->next = p;
}

void InsertList_tail(Node_t* head,int x)
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
	Node_t* tmp = head->next;
	head->next = tmp->next;
	free(tmp);
}

void DeleteList_tail(Node_t* head)
{
	Node_t* end = head->next;
	Node_t* tmp = end;
	if (end->next == NULL)
	{
		free(end);
		head->next = NULL;
	}
	else
	{
		while (end->next)
		{
			tmp = end;
			end = end->next;

		}
		tmp->next = NULL;
		free(end);
	}
	
}

void ShowList(Node_t* head)
{
	Node_t* p = head->next;
	while (p)
	{
		printf("%d", p->data);
		p = p->next;
	}
	printf("\n");
}

int main(void)
{
	Node_t* head = AllocNode(0);
	int i = 0;
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
		InsertList_tail(head,i);
		ShowList(head);
		Sleep(1000);
	}
	for (i = 1; i <= N; i++)
	{
		DeleteList_tail(head);
		ShowList(head);
		Sleep(1000);
	}
	free(head);
	return 0;
}