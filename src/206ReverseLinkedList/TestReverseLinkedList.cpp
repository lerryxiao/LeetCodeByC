//
// Created by 肖乐源 on 18/02/2017.
//
#include <stdlib.h>
#include "gtest/gtest.h"
#include "reverseLinkedList.h"
#include "../common/ListNode.h"


TEST(ReverseLinkedListSuite, OneNode) {
    int len=1;
    ListNode *list = makeLinkListTestData(1);
    ListNode * res = reverseList(list);
    while(res != NULL)
    {
        EXPECT_EQ(res->val, len);
        len--;
        res = res->next;
    }
}

TEST(ReverseLinkedListSuite, TwoNode) {
    int len = 2;
    ListNode *list = makeLinkListTestData(len);
    ListNode * res = reverseList(list);
    while(res != NULL)
    {
        EXPECT_EQ(res->val, len);
        len--;
        res = res->next;
    }
}

TEST(ReverseLinkedListSuite, ThreeNode) {
    int len = 3;
    ListNode *list = makeLinkListTestData(len);
    ListNode * res = reverseList(list);
    while(res != NULL)
    {
        EXPECT_EQ(res->val, len);
        len--;
        res = res->next;
    }
}

TEST(ReverseLinkedListSuite, FourNodeTestCase)
{
    int len = 4;
    ListNode *list = makeLinkListTestData(len);
    ListNode * res = reverseList(list);
    while(res != NULL)
    {
        EXPECT_EQ(res->val, len);
        len--;
        res = res->next;
    }
}

TEST(ReverseLinkedListSuite, FiveNode)
{
    int len = 5;
    ListNode *list = makeLinkListTestData(5);
    ListNode * res = reverseList(list);
    while(res != NULL)
    {
        EXPECT_EQ(res->val, len);
        len--;
        res = res->next;
    }
}

TEST(ReverseLinkedListSuit, SixNode) {
    int len = 6;
    ListNode *list = makeLinkListTestData(6);
    ListNode * res = reverseList(list);
    while(res != NULL)
    {
        EXPECT_EQ(res->val, len);
        len--;
        res = res->next;
    }
}

