#pragma once

#include "include/std.h"

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size(), res = 0;
        vector<int> dp(n, 1);
        for (int i = 1; i < n; ++i)
            for (int j = 0; j < i; ++j)
                if (nums[i] > nums[j]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                    res = max(res, dp[i]);
                }
        return res;
    }
};

