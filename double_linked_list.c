#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct {
	int data;
	struct Node* next;
	struct Node* front;
}Node;

Node* head, * tail;

push(Node* head, int data) {
	Node* node = malloc(sizeof(Node));
	node->data = data;
	Node* cur = head->next;
	Node* Front = cur->front;
	Front->next = node;
	node->front = Front;
	node->next = cur;
}

erase(Node* head) {
	Node* cur = head->next;
	head->next = cur->next;
	Node* Front = cur->next;
	Front->front = head;
	free(cur);
}

show(Node* head) {
	Node* cur = head->next;
	while (cur != tail) {
		printf(" %d", cur->data);
		cur = cur->next;
	}
	}
freeall(Node *head){
	Node* cur = head->next;
	while (cur != NULL) {
		free(cur);
		cur = cur->next;
	}
}

int main() {
	head = malloc(sizeof(Node));
	tail = malloc(sizeof(Node));
	head->next = tail;
	head->front = head;
	tail->next = tail;
	tail->front = head;

	push(head, 3);
	push(head, 4);
	push(head, 7);
	push(head, 9);
	push(head, 13);
	erase(head);
	show(head);
	freeall(head);

}
