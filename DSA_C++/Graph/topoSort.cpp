#include <iostream>
#include <vector>
#include <stack>
#include <list>
#include <queue>
using namespace std;

class Graph {
public:
    int V;
    list<int>* l;
    bool isUndir;

    Graph(int V, bool isUndir = true) {
        this->V = V;
        l = new list<int> [V];
        this->isUndir = isUndir;
    }

    void addEdge(int u, int v) {  // u---v
        l[u].push_back(v);
        if(isUndir) 
            l[v].push_back(u);
    }

    void printDAG() {
        for(int u=0; u<V; u++) {
            cout << u << ": ";
            for(int v : l[u]) {
                cout << v << ", ";
            }
            cout << endl;
        }
    }
};

/* DFS 
TC => O(V+E), SC => O(N)/O(V)*/
void topoHelper(int src, const Graph& graph, vector<bool>& vis, stack<int>& st) { 
    vis[src] = true;

    for(int v : graph.l[src]) {
        if(!vis[v]) {
            topoHelper(v, graph, vis, st);
        }
    }
    st.push(src);
}

void topoSort(const Graph& graph) {
    vector<bool> vis(graph.V, false);
    stack<int> st;

    for(int u=0; u<graph.V; u++) {
        if(!vis[u]) {
            topoHelper(u, graph, vis, st);
        }
    }

    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}

int main() {
    int V = 6;
    Graph graph(V, false);

    // DAG
    graph.addEdge(5, 0);
    graph.addEdge(4, 0);
    graph.addEdge(5, 2);
    graph.addEdge(2, 3);
    graph.addEdge(3, 1);
    graph.addEdge(4, 1);

    graph.printDAG();
    cout << endl;

    topoSort(graph);
    cout << endl;
    return 0;
}