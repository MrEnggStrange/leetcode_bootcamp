#include <gtest/gtest.h>
#include "../solution.h"

TEST(TwoSumTest, PositiveNumbers) {
    Solution sol;
    std::vector<int> nums = { 2, 7, 11, 15 };
    int target = 9;
    auto result = sol.twoSum(nums, target);
    EXPECT_EQ(nums[result[0]] + nums[result[1]], target);
}

TEST(TwoSumTest, NegativeNumbers) {
    Solution sol;
    std::vector<int> nums = { -3, 4, 3, 90 };
    int target = 0;
    auto result = sol.twoSum(nums, target);
    EXPECT_EQ(nums[result[0]] + nums[result[1]], target);
}
