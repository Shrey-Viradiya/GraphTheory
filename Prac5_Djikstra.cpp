// Write a program to implement single source shortest path algorithm.

#include <iostream>
#include "Djikstra.h"

int main(){
    using namespace std;

    int V, src;
    
    
    cout << "Enter the number of vertices: " << endl; 
    cin >> V;

    cout << "Enter the adjecency matrix of the graph: " << endl; 
    int **graphA = new int *[V];

    int error = 0;
    for (int i = 0; i < V; i++)
    {
        graphA[i] = new int[V];
        for (int j = 0; j < V; j++)
        {
            cin >> graphA[i][j];
            if (graphA[i][j] < 0) error = 1;
        }
    }

    if(error){
        cout << "Djikstra can not perform with negative weights! " << endl;
        // Releasing Memory 
        for (int i = 0; i < V; i++)
        {
            delete [] graphA[i];
        }
        delete [] graphA;
        return 0;
    }

    cout << "Enter the Source Vertice: " << endl; 
    do
    {
        cin >> src;
        if (src >= V){
            cout << "Invalid Source.. must be between 0 to" << (V-1) << endl;
        }
    } while (src >= V);
    


    Djikstra(graphA, V, src);

    // Releasing Memory
    for (int i = 0; i < V; i++)
    {
        delete [] graphA[i];
    }
    delete [] graphA;
    return 0;
}