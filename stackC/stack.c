#include<stdio.h>
#include<stdlib.h>
#include "stack.h"

// create new node
struct node *createNode(int value) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
};

// head insert
void hPush(struct node *head, int value) {
    struct node *newNode = createNode(value);
    newNode->next = head->next;
    head->next = newNode;
}

int pop(struct node *head) {
    int ret = head->next->value;
    struct node *tempNode = head->next;
    head->next = head->next->next;
    free(tempNode);
    return ret;
}

// print list
void printList(struct node *head) {
    struct node *p = head->next;
    while (p != NULL) {
        printf("%d ", p->value);
        p = p->next;
    }
}