#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct {
	int data;
	struct Node* next;
}Node;

add(Node* head, int newdata){
	Node* node = malloc(sizeof(Node));
	node->data = newdata;
	node->next = head->next;
	head->next = node;

}

linkremove(Node* head) {
	Node* moving = head->next;
	head->next = moving->next;
	free(moving);
}

see(Node* head) {
	Node* cur = head->next;
	while (cur != NULL) {
		printf("%d ", cur->data);
		cur = cur->next;
	}
}

freeall(Node* head) {
	Node* freea = head->next;
	while (freea != NULL) {
		free(freea);
		freea = freea->next;
	}
}
int main() {
	Node* head = malloc(sizeof(Node));
	head->next = NULL;
	add(head, 1);
	add(head, 2);
	add(head, 3);
	add(head, 8);
	add(head, 23);
	linkremove(head);
	see(head);
	freeall(head);
}