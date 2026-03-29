#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <algorithm>
#include <climits>
using namespace std;

class Edge {
public:
    int v;
    int wt;

    Edge(int v, int wt) {
        this->v = v;
        this->wt = wt;
    }
};

void dijkstraAlgo(int src, vector<vector<Edge>> graph, int V) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
    // pair (dist[v], v)

    vector<int> dist(V, INT_MAX);

    minHeap.push(make_pair(0, src));
    dist[src] = 0; // 1st vertex distane will 0

    while(!minHeap.empty()) {
        int u = minHeap.top().second;
        minHeap.pop();

        vector<Edge> edges = graph[u];
        for(Edge e : edges) { // e.v, e.wt
            if(dist[e.v] > dist[u]+e.wt) {
                dist[e.v] = dist[u]+e.wt;
                minHeap.push(make_pair(dist[e.v], e.v));
            }
        }
    }

    for(int d : dist) {
        cout << d << " ";
    }
    cout << endl;
}



int main() {
    int V = 6;
    vector<vector<Edge>> graph(V);

    graph[0].push_back(Edge(1, 2));
    graph[0].push_back(Edge(2, 4));

    graph[1].push_back(Edge(2, 1));
    graph[1].push_back(Edge(3, 7));

    graph[2].push_back(Edge(4, 3));

    graph[3].push_back(Edge(5, 1));

    graph[4].push_back(Edge(3, 2));
    graph[4].push_back(Edge(2, 5));

    dijkstraAlgo(2, graph, V);
    return 0;
}