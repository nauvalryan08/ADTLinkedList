#include "linked.h"

void initList(LinkedList *L) {
	L->head = NULL;
}

Node* createNode(int value) {
	Node *newNode = (Node*) malloc(sizeof(Node));
	if (newNode) {
		newNode->data = value;
		newNode->next = NULL;
	}
	return newNode;
}

void insertFirst(LinkedList *L, int value) {
	Node* newNode = createNode(value);
	if (newNode) {
		newNode->next = L->head;
		L->head = newNode;
	}
}

void insertLast(LinkedList *L, int value) {
	Node* newNode = createNode(value);
	if (!newNode) return;
	
	if (L->head == NULL) {
		L->head = newNode;
	} else {
		Node* temp = L->head;
		while (temp->next) temp = temp->next;
		temp->next = newNode;
	}
}

void insertAfter(LinkedList *L, int value, int pos) {
	if (pos == 1) {
		insertFirst(L, value);
	}
	
	int i = 1; 
	Node* newNode = createNode(value);
	if (!newNode) return;
	Node* temp = L->head;
	while (temp != NULL & i < pos-1) {
		temp = temp->next;
		i++;
	}
	
	if (temp == NULL) return;
	newNode->next = temp->next;
	temp->next = newNode;
}

void deleteFirst(LinkedList *L) {
	if (L->head == NULL) return;
    Node* temp = L->head;
    L->head = L->head->next;
    free(temp);
}

void deleteLast(LinkedList *L) {
	if (L->head == NULL) return;

    if (L->head->next == NULL) {
        free(L->head);
        L->head = NULL;
        return;
    }

    Node* temp = L->head;
    while (temp->next->next)
        temp = temp->next;

    free(temp->next);
    temp->next = NULL;
}

void deleteBetween(LinkedList *L, int pos) {
	if (pos == 1) {
        deleteFirst(L);
        return;
    }

    Node* temp = L->head; 
    int i = 1;
    while (temp != NULL && i < pos - 1) {
        temp = temp->next;
	i++;
    }
    if (temp == NULL || temp->next == NULL) return;

    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    free(deleteNode);
}

void printList(LinkedList L) {
    Node* temp = L.head;
    while (temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
