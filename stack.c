#include<stdio.h>
#include<stdlib.h>

struct node {
    int value;
    struct node *next;
};

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

int main() {
    struct node *head = createNode(0);
    hPush(head, 1);
    hPush(head, 2);
    hPush(head, 3);
    printf("%d\n", pop(head));
    printf("%d\n", pop(head));
    printList(head);
    
    return 0;
}