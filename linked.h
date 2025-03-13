#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "boolean.h"

// Struktur Node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Struktur Linked List
typedef struct {
    Node* head;
} LinkedList;

// Inisialisasi List Kosong
void initList(LinkedList *L);
Node* createNode(int value);

// Function Insert
void insertFirst(LinkedList *L, int value);
void insertLast(LinkedList* L, int value);
void insertAfter(LinkedList *L, int value, int pos);

// Function Delete
void deleteFirst(LinkedList *L);
void deleteLast(LinkedList *L);
void deleteBetween(LinkedList *L, int pos);

void printList(LinkedList L);

#endif
