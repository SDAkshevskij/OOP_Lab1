#include <gtest/gtest.h>
#include "solution.h"


TEST(SwapABTest, EmptyString){
    std::string input = "";
    EXPECT_EQ(swapAB(input), "");
}

TEST(SwapABTest, WithoutC) {
    EXPECT_EQ(swapAB("ab"), "ba");
    EXPECT_EQ(swapAB("a"), "b");
    EXPECT_EQ(swapAB("b"), "a");
}

TEST(SwapABTest, WithC){
    EXPECT_EQ(swapAB("abacaba"), "babcbab");
    EXPECT_EQ(swapAB("cccc"), "cccc");
    EXPECT_EQ(swapAB("aaabbbccc"), "bbbaaaccc");
}