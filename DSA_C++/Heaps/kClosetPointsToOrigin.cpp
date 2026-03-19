#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

void printPQEle(priority_queue<vector<int>>& pq) {
    while(!pq.empty()) {
        vector<int> curr = pq.top();
        for(int i=0; i<curr.size(); i++) {
            cout << "PQ dist " << curr[i] << " ";
        }
        cout << "\n";
        pq.pop();
    }
}

vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    priority_queue<vector<int>> maxHeap;

    for(auto& p : points) {
        int x = p[0], y = p[1];
        int dist = x*x + y*y;
        maxHeap.push({dist, x, y});

        if(maxHeap.size() > k) {
            maxHeap.pop();
        }
    }
    printPQEle(maxHeap);

    vector<vector<int>> result(k);

    for(int i=0; i<k; i++) {
        vector<int> top = maxHeap.top();
        maxHeap.pop();
        result[i] = {top[1], top[2]};
    }
    return result;
}

int main() {
    // vect[[1,3],[-2,2]]
    vector<vector<int>> points = {{1, 3}, {-2, 2}};
    kClosest(points, 2);
    return 0;
}