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
    if (isEmpty(stack)) {
        printf("스택 언더플로우\n");
        exit(1);
    }
    Node* temp = stack->top;
    int data = temp->data;
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

// 세 숫자를 정렬하는 함수
void sortThree(Stack* a) {
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
}

int main() {
    Stack a;
    initStack(&a);

    // 세 개의 무작위 숫자를 스택 A에 추가
    push(&a, 3);
    push(&a, 1);
    push(&a, 2);

    // 세 숫자를 정렬
    sortThree(&a);

    // 정렬된 스택 출력
    while (!isEmpty(&a)) {
        printf("%d ", pop(&a));
    }
    printf("\n");

    return 0;
}
