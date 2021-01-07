#pragma once
#include<vector>
#include<set>
#include<iterator>
#include<iostream>
#include<algorithm>
using namespace std;

class UndirectedGraph
{
public:
    int numVertices;
    vector <set <int>> graph;
    UndirectedGraph(int V);
    void addEdge(int src, int dest);
    void displayGraph();
    static UndirectedGraph Union(UndirectedGraph graphA, UndirectedGraph graphB);
    static UndirectedGraph Intersection(UndirectedGraph graphA, UndirectedGraph graphB);
};

UndirectedGraph::UndirectedGraph(int V){
    numVertices = V;
    for (int i = 0; i < numVertices; i++)
    {
        graph.push_back(set<int> {});
    }   
}

void UndirectedGraph::displayGraph(){
    int node = 0;
    for (auto i = graph.begin(); i != graph.end(); i++)
    {
        cout << (node++) << " -> ";
        for (auto j = (*i).begin(); j != (*i).end(); j++)
        {
            cout << *j << " -> ";
        }
        cout << endl;
    }    
}

void UndirectedGraph::addEdge(int src, int dest){
    graph[src].insert(dest);
    graph[dest].insert(src);
}

UndirectedGraph UndirectedGraph::Union(UndirectedGraph graphA, UndirectedGraph graphB){
    int V = graphA.numVertices;
    UndirectedGraph union_graph(V);

    for (int i = 0; i < V; i++)
    {
        set_union(graphA.graph[i].begin(), graphA.graph[i].end(), graphB.graph[i].begin(), graphB.graph[i].end(), inserter(union_graph.graph[i], union_graph.graph[i].begin()));
    }

    return union_graph;    
}

UndirectedGraph UndirectedGraph::Intersection(UndirectedGraph graphA, UndirectedGraph graphB){
    int V = graphA.numVertices;
    UndirectedGraph intersection_graph(V);

    for (int i = 0; i < V; i++)
    {
        set_intersection(graphA.graph[i].begin(), graphA.graph[i].end(), graphB.graph[i].begin(), graphB.graph[i].end(), inserter(intersection_graph.graph[i], intersection_graph.graph[i].begin()));
    }

    return intersection_graph;    
}