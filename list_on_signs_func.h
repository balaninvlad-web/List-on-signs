#ifndef LIST_ON_SIGNS_FUNC_H
#define LIST_ON_SIGNS_FUNC_H
#include <TXLib.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int ListErr_t;

typedef struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

typedef struct
{
    Node* head;
    Node* tail;
    size_t size;
} LinkedList;

LinkedList* ListCtor();
Node* InsertNode (LinkedList* list, Node* current, int value);
void PrintList (LinkedList* list);
int DeleteNode (LinkedList* list, Node* node);
void ListDtor (LinkedList* list);

#endif
