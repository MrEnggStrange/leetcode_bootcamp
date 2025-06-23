// FizzBuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> results;

        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                results.push_back("FizzBuzz");
            }
            else if (i % 3 == 0) {
                results.push_back("Fizz");
            }
            else if (i % 5 == 0) {
                results.push_back("Buzz");
            }
            else {
                results.push_back(to_string(i)); // Convert number to string
            }
        }

        return results;
    }
};

int main() {
    Solution solution;
    int n;

    // Input from user
    cout << "Enter a number: ";
    cin >> n;

    // Get FizzBuzz result
    vector<string> result = solution.fizzBuzz(n);

    // Print output
    cout << "FizzBuzz output:\n";
    for (const string& s : result) {
        cout << s << endl;
    }

    return 0;
}
