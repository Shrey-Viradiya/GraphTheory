// Write a program to implement All source shortest path algorithm.

#include <iostream>
#include "FloydWarshall.h"

int main(){
    using namespace std;

    int V, src, INF=99999;
    
    
    cout << "Enter the number of vertices: " << endl; 
    cin >> V;

    cout << "Enter the adjecency matrix of the graph: \n(USE 99999 for INF)" << endl;
    int **graphA = new int *[V];

    for (int i = 0; i < V; i++)
    {
        graphA[i] = new int[V];
        for (int j = 0; j < V; j++)
        {
            cin >> graphA[i][j];
        }
    } 

    FloydWarshall(graphA, V);

    // Releasing Memory
    for (int i = 0; i < V; i++)
    {
        delete [] graphA[i];
    }
    delete [] graphA;
    return 0;
}