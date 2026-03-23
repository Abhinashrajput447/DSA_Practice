#include <iostream>
#include <vector>
#include <queue>
#include <list>
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

    void addEdge(int u, int v) { // u--->v or v--->u
        l[u].push_back(v);
        if(isUndir) {
            l[v].push_back(u);
        }
    }

    void print() {
        for(int u=0; u<V; u++) {
            cout << u << " : ";

            for(int neigh : l[u]) {
                cout << neigh << ", ";
            }
            cout << endl;
        }
    }

    bool dfs(int src, vector<bool>& vis, vector<bool>& recPath) {
        vis[src] = true;
        recPath[src] = true;

        for(int neigh : l[src]) {

            // Case 1: not visited
            if(!vis[neigh]) {
                if(dfs(neigh, vis, recPath)) {
                    return true;
                }
            }

            // Case 2: visited & in recursion stack → cycle
            else if(recPath[neigh]) {
                return true;
            }
        }

        recPath[src] = false; // backtracking
        return false;
    }

    bool isCycleDir() {
        vector<bool> vis(V, false);
        vector<bool> recPath(V, false);

        // Coumplsery for directed graph
        for(int i=0; i<V; i++) {
            if(!vis[i]) {
                if(dfs(i, vis, recPath)) {
                    return true;
                }
            }
        }
        return false;
    }
};


int main() {
    int V = 5;
    Graph graph(V, false);

    graph.addEdge(1, 0);
    // graph.addEdge(0, 2);
    graph.addEdge(2, 3);
    graph.addEdge(3, 0);

    // graph.print();
    cout << graph.isCycleDir() << endl;
    return 0;
}