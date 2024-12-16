#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *prev;
	struct Node *next;
} Node;

typedef struct Stack{
	Node *top;
} Stack;

// 스택 초기화
void initStack(Stack *stack)
{
	stack->top = NULL;
}

int isEmpty(Stack *stack)
{
	return (stack->top == NULL);
}

void push(Stack *stack, int data)
{
	Node* newNode = (Node *)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = stack->top;
	newNode->prev = NULL;
	if (stack->top != NULL)
		stack->top->prev = newNode;
	stack->top = newNode;
}

// 스택제거
int pop(Stack *stack)
{
	if(isEmpty(stack))
	{
		printf("Stack is empty");
		exit(1);
	}
	Node *temp = stack->top;
	int data = temp->data;
	stack->top = stack->top->next;
	if (stack->top != NULL)
		stack->top->prev = NULL;
	free(temp);
	return (data);
}

// 스택제일 위에 있는 값 반환
int peek(Stack *stack)
{
	if (isEmpty(stack))
	{
		printf("Stack is empty");
		exit(1);
	}
	return (stack->top->data);
}

void sa(Stack *a)
{
	int temp;

	if(a->top && a->top->next)
	{
		temp = a->top->data;
		a->top->data = a->top->next->data;
		a->top->next->data = temp;
	}
}