#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <list>
using namespace std;

// Directed Graph
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

    void addEdge(int u, int v) {
        l[u].push_back(v);
        if(isUndir) 
            l[v].push_back(u);
    }
};

// Print the directed graph
void printGraph(const Graph& graph) {
    for(int u=0; u<graph.V; u++) {
        cout << u << ": ";

        for(int v : graph.l[u]) {
            cout << v << ", ";
        }
        cout << endl;
    }
}

// print all the path from source to destination
void pathHelper(int src, int dest, const Graph& graph, vector<bool>& vis, string& path, vector<string>& ans) {
    if(src == dest) {
        // path += to_string(src);
        // ans.push_back(path);
        cout << path << src << endl;
        return;
    }

    vis[src] = true;
    path += to_string(src);
    list<int> neighbors = graph.l[src];

    for(int v : neighbors) {
        if(!vis[v]) {
            pathHelper(v, dest, graph, vis, path, ans);
        }
    }

    // path = path.substr(0, path.size()-1);
    path.pop_back();
    vis[src] = false;
}

void printAllPaths(int src, int dest, const Graph& graph) {
    vector<bool> vis(graph.V, false);
    string path = "";
    vector<string> ans;

    pathHelper(src, dest, graph, vis, path, ans);
}

int main() {
    int V = 6;
    Graph graph(V, false);

    // Directed Graph
    graph.addEdge(0, 3);
    graph.addEdge(2, 3);
    graph.addEdge(3, 1);
    graph.addEdge(4, 0);
    graph.addEdge(4, 1);
    graph.addEdge(5, 0);
    graph.addEdge(5, 2);

    cout << "Print The Graph \n";
    printGraph(graph);

    cout << "Sourese to destination All path \n";
    printAllPaths(5, 1, graph);

    return 0;
}