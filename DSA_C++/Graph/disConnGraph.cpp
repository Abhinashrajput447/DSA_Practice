#include <iostream>
#include <vector>
#include <queue>
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

    // Add the edges and vertices in the Graph
    void addEdge(int u, int v) { // u ----- v
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void printGraph() {
        for(int u=0; u<V; u++) {
            list<int> neighbors = l[u];
            
            cout << u << " : ";
            for(int v : neighbors) {
                cout << v << ", ";
            }
            cout << endl;
        }
    }

    // BFS on Disconnected Graph
    void bfsHelper(int st, vector<bool>& vis) {
        queue<int> q;
        q.push(st);
        vis[st] = true;

        while(!q.empty()) {
            int curr = q.front();
            q.pop();

            cout << curr << " ";
            for(int v : l[curr]) {
                if(!vis[v]) {
                    vis[v] = true;
                    q.push(v);
                }
            }
        }
    }

    void bfs() {
        vector<bool> vis(V, false);
        for(int i=0; i<V; i++) {
            if(!vis[i]) {
                bfsHelper(i, vis);
                cout << endl;
            }
        }
    }

    // DFS on Disconnected Graph
    void dfsHelper(int u, vector<bool>& vis) {
        vis[u] = true;
        cout << u << " ";

        for(int v : l[u]) {
            if(!vis[v]) {
                dfsHelper(v, vis);
            }
        }
    }

    void dfs() {
        vector<bool> vis(V, false);

        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                dfsHelper(i, vis);  // starting point = i
                cout << endl; // each component in new line
            }
        }
    }
};



int main() {
    Graph graph(10);

    graph.addEdge(1, 6);
    graph.addEdge(6, 4);
    graph.addEdge(4, 9);
    graph.addEdge(4, 3);
    graph.addEdge(3, 8);
    graph.addEdge(3, 7);

    graph.addEdge(2, 5);
    graph.addEdge(2, 0);
    graph.bfs();
    cout << endl;
    return 0;
}