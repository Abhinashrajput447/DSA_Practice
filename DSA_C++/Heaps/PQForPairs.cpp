#include <iostream>
#include <queue>
using namespace std;


struct ComparePair {
    bool operator () (pair<string, int> &p1, pair<string, int> &p2) {
        return p1.second < p2.second;
    }
};

int main() {
    priority_queue<pair<string, int>, vector<pair<string, int>>, ComparePair>pq; //Default - maxHeap ; "first"

    pq.push(make_pair("Abhinash", 100));
    pq.push(make_pair("varsha", 99));
    pq.push(make_pair("ritik", 97));

    while(!pq.empty()) {
        cout << pq.top().first << ", " << pq.top().second << endl;
        pq.pop();
    }

    return 0;
}