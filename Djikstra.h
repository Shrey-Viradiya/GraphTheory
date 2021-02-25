#pragma once

#include <limits.h>
#include <iostream>

void Djikstra(int **graph, int V, int src){
    int *dist = new int[V];
    bool *visited = new bool[V];

    for (int i = 0; i < V; i++)
		dist[i] = INT_MAX, visited[i] = false;

    dist[src] = 0;

    for (int count = 0; count < V - 1; count++)
    {
        int min = INT_MAX, min_index;

        // Finding Minimum Distance
        for (int v = 0; v < V; v++){
            if (visited[v] == false && dist[v] <= min)
			    min = dist[v], min_index = v;
        }
        
        visited[min_index] = true;
        for (int v = 0; v < V; v++){
            if (!visited[v] && graph[min_index][v] && dist[min_index] != INT_MAX && dist[min_index] + graph[min_index][v] < dist[v]){
                dist[v] = dist[min_index] + graph[min_index][v];
            }
        }
    }
    
    using namespace std;
    cout << "Vertices \t Distance from Source\n" << endl;
	for (int i = 0; i < V; i++)
		cout << src << "-->" << i << " : " << dist[i] << endl;
}