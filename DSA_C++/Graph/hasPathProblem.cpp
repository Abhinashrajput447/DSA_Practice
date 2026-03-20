#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

class Graph {
    int V;
    list<int>* l;

public:
    Graph(int V) {
        this->V = V;
        l = new list<int> [V];
    }

    void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    // Path problem using DFS
    bool pathHelper(int src, int dest, vector<bool>& vis) {
        if(src == dest) {
            return true;
        }
        vis[src] = true;
        list<int> neighbors = l[src];

        for(int v: neighbors) {
            if(!vis[v]) {
                if(pathHelper(v, dest, vis)) {
                    return true;
                }
            }
        }

        return false;
    }

    // Path problem using BFS
    bool pathHelper2(int src, int dest, vector<bool>& vis) {
        queue<int> q;
        q.push(src);
        vis[src] = true;

        while(!q.empty()) {
            int curr = q.front();
            q.pop();

            if(curr == dest) {
                return true;
            }

            list<int> neighbors = l[curr];
            for(int v : neighbors) {
                if(!vis[v]) {
                    vis[v] = true;
                    q.push(v);
                }
            }
        }
        return false;
    }

    bool hasPath(int src, int dest) {
        vector<bool> vis(V, false);
        return pathHelper2(src, dest, vis);
        // return pathHelper2(src, dest);
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

    cout << graph.hasPath(1, 5) << endl;
    return 0;
}