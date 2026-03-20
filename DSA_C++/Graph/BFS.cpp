#include <iostream>
#include <queue>
#include <vector>
#include <list>
using namespace std;

class Graph {
    int V;
    list<int>* l;

public:
    Graph(int V) {
        this->V = V;
        l = new list<int> [V];
    }

    // Add the edges and vertices in the Graph
    void addEdge(int u, int v) { // u ----- v
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void print() {
        for(int u=0; u<V; u++) {
            list<int> neighbors = l[u];
            
            cout << u << " : ";
            for(int v : neighbors) {
                cout << v << ", ";
            }
            cout << endl;
        }
    }

    // BFS(Breadth First Search) Traversal
    void bfs() {  // T.C => O(V+E), S.C => O(V)
        queue<int> q;
        vector<bool> vis(V, false); // Cheacking visited or unvisited vertices and edges
        q.push(0);
        vis[0] = true;

        while(!q.empty()) {
            int u = q.front(); // Curr vertex
            q.pop();
            cout << u << " ";
            list<int> neighbors = l[u];
            for(int v : neighbors) {
                if(!vis[v]) {
                    vis[v] = true;
                    q.push(v);
                }
            } 
        }

        cout << endl;
    }

};

int main() {
    Graph graph(7);

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);
    graph.addEdge(3, 4);
    graph.addEdge(3, 5);
    graph.addEdge(4, 5);
    graph.addEdge(5, 6);

    // graph.print();
    graph.bfs();
    return 0;
}