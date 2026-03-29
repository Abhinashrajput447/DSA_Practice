#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <stack>
using namespace std;

class Graph {
    int V;
    list<int>* l;
    bool isUndir;

public:
    Graph(int V, bool isUndir = true) {
        this->V = V;
        l = new list<int> [V];
        this->isUndir = isUndir;
    }

    void addEdge(int u, int v) {
        l[u].push_back(v);
        if(isUndir) 
            l[v].push_back(u);
        
    }

    void printDirGraph() {
        for(int u=0; u<V; u++) {
            cout << u << ": ";
            for(int v : l[u]) {
                cout << v << ", ";
            }
            cout << endl;
        }
    }

    void calInDegree(vector<int>& indeg) { // u---->v
        for(int u=0; u<V; u++) {
            for(int v : l[u]) {// neighbors
                indeg[v]++;
            }
        }
    }

    void topoSortByKanhAlgo() { // kahn's algo
        vector<int> indeg(V, 0);
        queue<int> q;
        calInDegree(indeg);

        for(int i=0; i<V; i++) {
            // 0 indegree node starting point
            if(indeg[i] == 0) {
                q.push(i);
            }
        }

        while(!q.empty()) {
            int curr = q.front();
            q.pop();
            cout << curr << " ";
            list<int> neigh = l[curr];

            for(int v : neigh) { // No dependencies
                indeg[v]--;

                if(indeg[v] == 0) {
                    q.push(v);
                }
            }
        }
        cout << endl;
    }
};

int main() {
    int V = 6;
    Graph graph(V, false);

    // DAG
    graph.addEdge(5, 0);
    graph.addEdge(5, 2);
    graph.addEdge(2, 3);
    graph.addEdge(4, 1);
    graph.addEdge(4, 0);
    graph.addEdge(3, 1);

    graph.printDirGraph();
    graph.topoSortByKanhAlgo();
    return 0;
}