//
// Created by 肖乐源 on 17/02/2017.
//

#ifndef LEETCODEC_LISTNODE_H
#define LEETCODEC_LISTNODE_H

#ifdef __cplusplus
extern "C" {
#endif

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *makeLinkListTestData(int len);

void LinkListPrintf(struct ListNode *head);

#ifdef __cplusplus
}
#endif
#endif //LEETCODEC_LISTNODE_H
