#ifndef _STACK_H
#define _STACK_H

struct node {
    int value;
    struct node *next;
};
struct node *createNode(int value);
void hPush(struct node *head, int value);
int pop(struct node *head);
void printList(struct node *head);

#endif