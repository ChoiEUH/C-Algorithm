#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int data;
	struct Node* next;
} Node;

typedef struct {
	Node* top;
}stack;

push(stack* stack, int data) {
	Node* node = malloc(sizeof(Node));
	node->data = data;
	node->next = stack->top;
	stack->top = node;
}

pop(stack* stack) {
	Node* cur = stack->top;
	stack->top = cur->next;
	free(cur);
}

see(stack* stack) {
	Node* cur = stack->top;
	while (cur != NULL) {
		printf("%d ", cur->data);
		cur = cur->next;
	}
}

freeall(stack* stack) {
	Node* cur = stack->top;
	while (cur != NULL) {
		free(cur);
		cur = cur->next;
	}
}

int main() {
	stack* stack = malloc(sizeof(stack));
	stack->top = NULL;
	push(stack, 1);
	push(stack, 2);
	push(stack, 3);
	push(stack, 4);
	push(stack, 5);
	pop(stack);
	see(stack);
	freeall(stack);

}