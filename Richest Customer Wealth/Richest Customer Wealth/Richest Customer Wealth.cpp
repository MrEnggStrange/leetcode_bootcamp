// Richest Customer Wealth.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxwealth = 0;
        for (int i = 0; i < accounts.size(); i++) {
            int sum = 0;
            for (int j = 0; j < accounts[i].size(); j++) {
                sum += accounts[i][j];
            }
            if (sum > maxwealth) {
                maxwealth = sum;
            }
        }
        return maxwealth;
    }
};

int main() {
    Solution sol;

    // Example input: 3 customers, each with accounts in 3 banks
    vector<vector<int>> accounts = {
        {1, 2, 3},
        {3, 2, 1},
        {4, 3, 2}
    };

    int result = sol.maximumWealth(accounts);

    cout << "Maximum wealth: " << result << endl;

    return 0;
}
