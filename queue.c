#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


typedef struct{
	int data;
	struct Node *next;
	
}Node;

typedef struct {
 Node *front;
 Node *rear;
	int count;
}Queue;

push(Queue *queue, int data){
	Node *node = malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;
	if(queue->count == 0){
		queue->front = node;
	}
	else{
		queue->rear->next = node;
	}
	queue->rear = node;
	queue->count++;
}
pop(Queue *queue)
{
	if(queue->count == 0){
		printf("underflow");
	}
	Node *node = queue->front;
	int data = node->data;
	queue->front = node->next;
	free(node);
	queue->count--;
	return data;
}
see(Queue *queue){
	Node *cur = queue->front;
	while(cur != NULL){
		printf("%d\n",cur->data);
		cur = cur->next;
	}
}
int main()
{
	Queue queue;
	queue.front =queue.rear = NULL;
	queue.count = 0;
	push(&queue, 2);
	push(&queue, 3);
	push(&queue, 8);
	push(&queue, 6);
	push(&queue, 5);
	pop(&queue);
	see(&queue);
}

