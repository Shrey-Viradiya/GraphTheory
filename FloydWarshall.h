#pragma once

#include <iostream>

void FloydWarshall(int **graphA, int V){
    using namespace std;

    int **dist = new int *[V];

    // Copy the dist matrix
    
    for (int i = 0; i < V; i++)
    {
        dist[i] = new int[V];
        for (int j = 0; j < V; j++)
            dist[i][j] = graphA[i][j];
    }

    for (int k = 0; k < V; k++) // for all vertices update matrix by
		for (int i = 0; i < V; i++)     // picking the pair of source
			for (int j = 0; j < V; j++)		// and destination vertices
				if (dist[i][k] + dist[k][j] < dist[i][j]) dist[i][j] = dist[i][k] + dist[k][j]; // update is necessary

    
	cout << "Floyd Warshal" << endl;
    cout << "  | " ;
    for (int i = 0; i < V; i++) cout << i << " ";
    cout << endl;
    cout << "------------------------" << endl;
	for (int i = 0; i < V; i++){
        cout << i << " | " ; 
        for (int j = 0; j < V; j++)  cout << dist[i][j] << " ";
        cout << endl;
    } 
}