#pragma once
#include <vector>
#include<iterator>
#include<iostream>
using namespace std;

class UndirectedGraph
{ 
    int numVertices;
    vector <vector <int>> graph;
    
    
public:
    UndirectedGraph(int V);
    void addEdge(int src, int dest);
    void displayGraph();
};

UndirectedGraph::UndirectedGraph(int V){
    numVertices = V;
    for (int i = 0; i < numVertices; i++)
    {
        graph.push_back(vector<int> {i});
    }   
}

void UndirectedGraph::displayGraph(){
    for (auto i = graph.begin(); i != graph.end(); i++)
    {
        for (auto j = (*i).begin(); j != (*i).end(); j++)
        {
            cout << *j << " -> ";
        }
        cout << endl;
    }    
}

void UndirectedGraph::addEdge(int src, int dest){
    graph[src].push_back(dest);
    graph[dest].push_back(src);
}