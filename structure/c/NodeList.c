#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int T;


struct ListNode {
    T element;
    struct ListNode * next;
};


typedef struct ListNode * Node;


void initNodeList(Node head) {
    head->next = NULL;
}


bool insertNodeList(Node head, T element, int index) {
    if (index < 0) return 0;
    while (index--) {
        head = head->next;
        if (head == NULL) return 0;
    }
    Node node = (Node)malloc(sizeof(struct ListNode));
    if (node == NULL) return 0;
    node->element = element;
    node->next = head->next;
    head->next = node;
    return 1;
}


bool deleteNodeList(Node head, int index) {
    if (index < 0) return 0;
    while (index--) {
        head = head->next;
        if (head == NULL) return 0;
    }
    if (head->next == NULL) return 0;
    Node tmp = head->next;
    head->next = head->next->next;
    free(tmp);
    return 1;
}


T * getNodeList(Node head, int index) {
    if (index < 0) return NULL;
    do {
        head = head->next;
        if (head == NULL) return 0;
    } while (index--);
    return &head->element;
}


int findNodeList(Node head, T element) {
    head = head->next;
    int i = 0;
    while (head) {
        if (head->element == element) return i;
        head = head->next;
        i++;
    }
    return -1;
}


int sizeNodeList(Node head) {
    int i = 0;
    while (head->next) {   
        head = head->next;
        i++;
    }
    return i;
    
}


void printNodeList(Node head) {
    while (head->next) {
        head = head->next;
        printf("%d ", head->element);
    }
    printf("\n");
}


int main() {
    struct ListNode head;
    initNodeList(&head);
    for (int i = 0; i < 5; i++)
        insertNodeList(&head, i * 100, i);
    deleteNodeList(&head, 0);
    printNodeList(&head);
    printf("%d\n", *getNodeList(&head, 2));
    printf("%d\n", findNodeList(&head, 200));
    printf("%d\n", sizeNodeList(&head));
}