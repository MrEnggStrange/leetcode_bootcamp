﻿#include "solution.h"
#include <unordered_map>

std::vector<int> Solution::twoSum(std::vector<int>&nums, int target) {
    std::unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return { numMap[complement], i };
        }
        numMap[nums[i]] = i;
    }
    return {};
}
