#include <iostream>
#include <list>
#include <queue>
#include <vector>
using namespace std;

class Graph {
public:
    int V;
    list<int>* l;

    Graph(int V) {
        this->V = V;
        l = new list<int> [V];
    }

    void addEdge(int u, int v) {  // u---v
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void print() {
        for(int u=0; u<V; u++) {  // 0, 1, 2, 3, 4
            list<int> neighbors = l[u];

            cout << u << " : ";
            for(int v : neighbors) {
                cout << v << ", ";
            }
            cout << endl;
        }
    }

    // cycle in undirected graph
    bool dfs(int src, int par, vector<bool>& vis) { // O(V+E)
        vis[src] = true;    
        list<int> neighbors = l[src];

        for(int v : neighbors) {
            if(!vis[v]) {
                // src will become parent
                if(dfs(v, src, vis)) {
                    return true;
                }
            }else {
                // back edge condition, src ------> neighbors
                if(v != par) {
                    return true;
                }
            }
        }
        return false;
    }

    bool isCycle() {
        vector<bool> vis(V, false);
        // this is for connected graph
        // return dfs(0, -1, vis); // default par = -1

        // this is for dis connected graph
        for(int i=0; i<V; i++) {
            return dfs(i, -1, vis);
        }
        return false;
    }
};

int main() {
    int V = 5;
    Graph graph(V);

    // Undirected graph
    graph.addEdge(0, 1);
    // graph.addEdge(0, 2);
    graph.addEdge(2, 3);

    graph.addEdge(1, 2);
    
    graph.addEdge(3, 4);

    // graph.print();
    cout << graph.isCycle() << "\n";
    return 0;
}