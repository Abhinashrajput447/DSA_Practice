#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <list>
using namespace std;

class Graph {
public:
    int V;
    list<int>* l;

    Graph(int V) {
        this->V = V;
        l = new list<int> [V];
    }

    void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);
    }
};

// Print the graph
void printGraph(const Graph& graph) {
    for(int u=0; u<graph.V; u++) {
        cout << u << " : ";

        for(int neigh : graph.l[u]) {
            cout << neigh << ", ";
        }
        cout << endl;
    }
}

// DFS (Helper) fnx for detecting cycle in undirected Graph
int cycleLen = -1;

// parent parameter added to avoid counting parent as neighbor in undirected graph
bool dfs(int u, int parent, const Graph& graph,
         vector<bool>& vis,
         vector<int>& depth) {

    vis[u] = true;

    for(int v : graph.l[u]) {
        
        // Skip the parent node to avoid false cycle detection
        if(v == parent) {
            continue;
        }

        if(!vis[v]) {
            depth[v] = depth[u] + 1;

            if(dfs(v, u, graph, vis, depth)) {
                return true;
            }
        }
        else if(vis[v]) {
            // Cycle found: calculate length using depth difference
            cycleLen = depth[u] - depth[v] + 1;
            return true;
        }
    }

    return false;
}


// Length of cycle in undirected graph
int lengthOfCycleInGraph(const Graph& graph) {

    vector<bool> vis(graph.V, false);
    vector<int> depth(graph.V, 0);

    for(int u = 0; u < graph.V; u++) {
        if(!vis[u]) {
            // dfs(u, graph, vis, recPath, depth)
            if(dfs(u, -1, graph, vis, depth)) {
                return cycleLen;
            }
        }
    }

    return -1; // no cycle
}

int main() {
    // Undirected graph
    int V = 5;
    Graph graph(V);

    // Adding edges in Graph
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(2, 3);
    graph.addEdge(1, 4);
    graph.addEdge(3, 1);

    printGraph(graph);
    cout << "Cycle Length: " << lengthOfCycleInGraph(graph) << endl;
    // cout << cycleLen << endl;
    return 0;
}