#include <stdio.h>
#include <stdlib.h>

// 노드 구조체 정의 (양방향 연결 리스트)
typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

// 스택 구조체 정의
typedef struct Stack {
    Node* top;
} Stack;

// 스택 초기화 함수
void initStack(Stack* stack) {
    stack->top = NULL;
}

// 스택이 비어 있는지 확인하는 함수
int isEmpty(Stack* stack) {
    return stack->top == NULL;
}

// 스택에 요소를 추가하는 함수
void push(Stack* stack, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = stack->top;
    newNode->prev = NULL;
    if (stack->top != NULL) {
        stack->top->prev = newNode;
    }
    stack->top = newNode;
}

// 스택에서 요소를 제거하는 함수
int pop(Stack* stack) {
	int data;
	Node *temp;
    
	if (isEmpty(stack)) {
        printf("스택 언더플로우\n");
        exit(1);
    }
    temp = stack->top;
    data = temp->data;
    stack->top = stack->top->next;
    if (stack->top != NULL) {
        stack->top->prev = NULL;
    }
    free(temp);
    return data;
}

// 스택의 상단 요소를 반환하는 함수
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("스택이 비어 있습니다\n");
        exit(1);
    }
    return stack->top->data;
}

// 액션 함수들
void sa(Stack* a) {
    if (a->top && a->top->next) {
        int temp = a->top->data;
        a->top->data = a->top->next->data;
        a->top->next->data = temp;
    }
}

void ra(Stack* a) {
    if (a->top && a->top->next) {
        Node* temp = a->top;
        a->top = a->top->next;
        a->top->prev = NULL;
        Node* current = a->top;
        while (current->next) {
            current = current->next;
        }
        current->next = temp;
        temp->prev = current;
        temp->next = NULL;
    }
}

void rra(Stack* a) {
    if (a->top && a->top->next) {
        Node* current = a->top;
        while (current->next) {
            current = current->next;
        }
        current->prev->next = NULL;
        current->next = a->top;
        a->top->prev = current;
        a->top = current;
        a->top->prev = NULL;
    }
}

void pb(Stack* a, Stack* b) {
    if (!isEmpty(a)) {
        int data = pop(a);
        push(b, data);
    }
}

void pa(Stack* a, Stack* b) {
    if (!isEmpty(b)) {
        int data = pop(b);
        push(a, data);
    }
}

// 다섯 숫자를 정렬하는 함수
void sortFive(Stack* a, Stack* b) {
    // 2개의 숫자를 스택 B로 이동
    pb(a, b);
    pb(a, b);
    // 스택 A의 나머지 3개의 숫자를 정렬
    int top = peek(a);
    int middle = a->top->next->data;
    int bottom = a->top->next->next->data;

    if (top > middle && middle < bottom && top < bottom) {
        sa(a);
    } else if (top > middle && middle > bottom && top > bottom) {
        sa(a);
        rra(a);
    } else if (top > middle && middle < bottom && top > bottom) {
        ra(a);
    } else if (top < middle && middle > bottom && top < bottom) {
        sa(a);
        ra(a);
    } else if (top < middle && middle > bottom && top > bottom) {
        rra(a);
    }

    // 스택 B에서 숫자를 하나씩 스택 A에 올바르게 삽입
    while (!isEmpty(b)) {
        pa(a, b);
        if (a->top->data > a->top->next->data) {
            sa(a);
        }
    }
}

int main() {
    Stack a, b;
    initStack(&a);
    initStack(&b);

    // 다섯 개의 무작위 숫자를 스택 A에 추가
    push(&a, 5);
    push(&a, 3);
    push(&a, 4);
    push(&a, 1);
    push(&a, 2);

    // 다섯 숫자를 정렬
    sortFive(&a, &b);

    // 정렬된 스택 출력
    while (!isEmpty(&a)) {
        printf("%d ", pop(&a));
    }
    printf("\n");

    return 0;
}
