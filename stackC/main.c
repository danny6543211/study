#include<stdio.h>
#include "stack.h"

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