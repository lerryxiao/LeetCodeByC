//
// Created by 肖乐源 on 11/03/2017.
//

#include "gtest/gtest.h"

#ifndef LEETCODEBYC_TWOSUMIITESTSUITE_H
#define LEETCODEBYC_TWOSUMIITESTSUITE_H


class TwoSumIITestSuite
        : public testing::Test
{
public:
    TwoSumIITestSuite();

    virtual ~TwoSumIITestSuite();

protected:
    virtual void SetUp();

    virtual void TearDown();
};


#endif //LEETCODEBYC_TWOSUMIITESTSUITE_H
