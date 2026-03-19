#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findCombinations(vector<int>& price, int k, int idx, vector<int>& current, vector<vector<int>>& result) {
    // Base Case: If we have picked k elements, add to results
    if(current.size() == k) {
        result.push_back(current);
    }

    // If we've reached the end of the array, stop
    if(idx == price.size()) return;

    // Option 1: Pick the current element
    current.push_back(price[idx]);
    findCombinations(price, k, idx+1, current, result);

    // Backtrack: Remove the element to try Option 2
    current.pop_back();

    // Option 2: SKIP the current elemet
    findCombinations(price, k, idx+1, current, result);
}

int main() {
    vector<int> price = {13, 5, 1, 8, 21, 2};
    int k = 3;
    vector<vector<int>> result;
    vector<int> current;

    findCombinations(price, k, 0, current, result);

    // Print the results
    for(auto& combination : result) {
        cout << "[";
        for(int i=0; i<combination.size(); i++) {
            cout << combination[i] << (i == combination.size() -1 ? "" : ", ");
        }
        cout << "]";
    }
    return 0;
}