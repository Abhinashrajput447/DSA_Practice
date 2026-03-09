#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int main() {
    //Max Heap
    priority_queue<string> pq;
    
    //Min Heap
    // priority_queue<string, vector<string>, greater<string>> pq;

    pq.push("Abhiansh");
    pq.push("Varsha");
    pq.push("Ritik");
    while(!pq.empty()) {
        cout << pq.top() << endl;
        pq.pop();
    }
    return 0;
}
