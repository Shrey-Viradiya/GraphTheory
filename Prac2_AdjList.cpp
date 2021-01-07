#include<vector>
#include<iterator>
#include<iostream>
using namespace std;

class Graph
{ 
    int numVertices;
    vector <vector <int>> graph;
    
    
public:
    Graph(int V);
    void addEdge(int src, int dest);
    void displayGraph();
};

Graph::Graph(int V){
    numVertices = V;
    for (int i = 0; i < numVertices; i++)
    {
        graph.push_back(vector<int> {i});
    }   
}

void Graph::displayGraph(){
    for (auto i = graph.begin(); i != graph.end(); i++)
    {
        for (auto j = (*i).begin(); j != (*i).end(); j++)
        {
            cout << *j << " -> ";
        }
        cout << endl;
    }    
}

void Graph::addEdge(int src, int dest){
    graph[src].push_back(dest);
    graph[dest].push_back(src);
}

int main(){

    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.displayGraph();

    return 0;
}