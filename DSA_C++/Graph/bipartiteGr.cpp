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

    void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);
    }
};

void printGraph(const Graph& graph) {
    for(int u=0; u < graph.V; u++) {
        cout << u << " --> ";
        // Iterate through the adjacency list for each vertex
        for(int neigh : graph.l[u]) {
            cout << neigh << ", ";
        }
        cout << endl;
    }
}


// Graph is Bipartite or not
bool isBiPartite(const Graph& graph) {
    queue<int> q;
    vector<bool> vis(graph.V, false);
    vector<int> color(graph.V, -1);
    q.push(0);
    color[0] = 0;
    vis[0] = true;

    while(!q.empty()) {
        int curr = q.front();
        q.pop();
        
        for(int neigh : graph.l[curr]) {
            if(!vis[neigh]) {
                vis[neigh] = true;
                color[neigh] = !color[curr]; // 0 --> 1 and 1 --> 0
                q.push(neigh);
            }else{
                if(color[neigh] == color[curr]) {
                    return false;
                }
            }
        }
    }
    return true;
}

// Connected Graph
bool isBiPartite2(const Graph& graph) {
    queue<int> q;
    vector<int> color(graph.V, -1); 
    q.push(0);
    color[0] = 0;

    while(!q.empty()) {
        int curr = q.front();
        q.pop();

        for(int neigh : graph.l[curr]) {
            if(color[neigh] == -1) { // unvisited
                color[neigh] = !color[curr];  // 0 --> 1 and 1 ---> 0
                q.push(neigh);
            }else{
                if(color[neigh] == color[curr]) {
                    return false;
                }
            }
        }
    }
    return true;
}

// DisConnected Graph
bool isBiPartite3(const Graph& graph) {
    vector<int> color(graph.V, -1);

    for(int i=0; i<graph.V; i++) {
        if(color[i] == -1) {
            queue<int> q;
            q.push(i);
            color[i] = 0;

            while(!q.empty()) {
                int curr = q.front();
                q.pop();

                for(int neigh : graph.l[curr]) {
                    if(color[neigh] == -1) {
                        color[neigh] = !color[curr];
                        q.push(neigh);
                    }else if(color[neigh] == color[curr]) {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

int main() {
    // undirected, bipartite graph
    int V = 5;
    Graph graph(V);
    // Test case1

    // graph.addEdge(0, 1);
    // graph.addEdge(0, 2);
    // graph.addEdge(1, 3);
    // graph.addEdge(2, 3);
    // graph.addEdge(0, 3);

    // Test case2
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(2, 3);
    graph.addEdge(1, 4);
    // graph.addEdge(3, 1);

    // Call the print function, passing the graph object as the parameter
    // printGraph(graph);
    cout << isBiPartite2(graph) << endl;
    return 0;
}