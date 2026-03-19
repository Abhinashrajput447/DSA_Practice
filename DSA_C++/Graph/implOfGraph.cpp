#include <iostream>
#include <vector>
#include <list>
using namespace  std;

// Graph with the help of adjacency list
// Undirected Unweighted Graph
class Graph {
    int V;
    list<int>* l;

public:
    Graph(int V) {
        this->V = V;
        l = new list<int> [V];
    }

    void addEdge(int u, int v) { //u----v
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void print() {
        for(int u=0; u<V; u++) { // 0, 1, 2, 3, 4
            list<int> neighbours = l[u];
            
            cout << u << " : ";
            for(int v : neighbours) {
                cout << v << " ";
            }
            cout << endl;
        }
    }
};

// Graph with the help of adjacency list
//  Undirected Weighted Graph
class Graph2 {
    int V;
    list<pair<int, int>>* l;

public:
    Graph2(int V) {
        this->V = V;
        l = new list<pair<int, int>> [V];
    }

    void addEdge(int u, int v, int wt) {
        l[u].push_back({v, wt});
        l[v].push_back({u, wt});
    }

    void print() {
        for(int u=0; u<V; u++) {
            list<pair<int, int>> neighbours = l[u];
            
            cout << u << " : ";
            for(const auto&  v : neighbours) {
                cout << v.first << "-->" << v.second << ", "; 
            }
            cout << endl;
        }
    }
};


int main() {
    // <<======================================================>>
    // Undirected Unweighted Graph
    // Graph graph(5);
    // graph.addEdge(0, 1);
    // graph.addEdge(1, 2);
    // graph.addEdge(1, 3);
    // graph.addEdge(2, 3);
    // graph.addEdge(2, 4);
    // graph.print();

    // <<======================================================>>


    //  Undirected Weighted Graph
    Graph2 graph(5);
    graph.addEdge(0, 1, 5);
    graph.addEdge(1, 2, 1);
    graph.addEdge(1, 3, 3);
    graph.addEdge(2, 3, 1);
    graph.addEdge(2, 4, 2);
    graph.print();
    return 0;
}