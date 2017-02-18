//
// Created by 肖乐源 on 18/02/2017.
//
#include <stdlib.h>
#include <stdio.h>
#include "ListNode.h"


struct ListNode * makeLinkListTestData(int len)
{
    struct ListNode *head = (struct ListNode *) malloc(sizeof(struct ListNode *));
    struct ListNode *h = head;
    for (int i = 0; i < len; i++)
    {
        h -> next = (struct ListNode *) malloc(sizeof(struct ListNode *));
        h -> next -> val = i + 1;
        h -> next ->next = NULL;
        h = h -> next;
    }
    return head->next;
}

void LinkListPrintf(struct ListNode *head)
{
    struct ListNode* node = head;
    while(node != NULL) {
        printf("%d", node->val);
        if(node -> next != NULL)
        {
            printf(" -> ");
        }
        node = node -> next;
    }

    printf("\n");
}

