#include <stdio.h>
#include <stdlib.h>
#include "reverseLinkedList.h"
#include "../common/ListNode.h"


struct ListNode * reverseList(struct ListNode *head) {
    if(head == NULL || head->next == NULL){
        return head;
    }
    struct ListNode* h = (struct ListNode*)malloc(sizeof(struct ListNode));
    h->next = head;
    head = h;
    struct ListNode* fNode = head->next;
    while(fNode->next != NULL){
        struct ListNode* temp = head->next;
        head->next = fNode->next;
        fNode->next = head->next->next;
        head->next->next = temp;
    }
    head = head->next;
    free(h);
    return head;
}


