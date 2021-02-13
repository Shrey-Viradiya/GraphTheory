// Implement the graph operation for union, intersection,
// compliment and subtraction of the two different graphs

#include <iostream>

int main(){
    using namespace std;

    int V;
    
    
    cout << "Enter the number of vertices: " << endl; 
    cin >> V;

    cout << "Enter the adjecency matrix of the first graph A: " << endl; 
    int **graphA = new int *[V];
    for (int i = 0; i < V; i++)
    {
        graphA[i] = new int[V];
        for (int j = 0; j < V; j++)
        {
            cin >> graphA[i][j];
        }
        
    }

    cout << "Enter the adjecency matrix of the first graph B: " << endl; 
    int **graphB = new int *[V];
    for (int i = 0; i < V; i++)
    {
        graphB[i] = new int[V];
        for (int j = 0; j < V; j++)
        {
            cin >> graphB[i][j];
        }
    }

    cout << "Union of the graph A and graph B" << endl;
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cout << (graphA[i][j] || graphB[i][j]) << ' ';
        }
        cout << endl;        
    }

    cout << "Intersection of the graph A and graph B" << endl;
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cout << (graphA[i][j] && graphB[i][j]) << ' ';
        }
        cout << endl;        
    }

    cout << "Subtraction graph A - graph B" << endl;
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cout << (graphA[i][j] && (!graphB[i][j])) << ' ';
        }
        cout << endl;
    }

    cout << "Subtraction graph B - graph A" << endl;
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cout << (graphB[i][j] && (!graphA[i][j])) << ' ';
        }
        cout << endl;
    }

    cout << "Complement of graph A" << endl;
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (i != j)
                cout << (1 && (!graphA[i][j])) << ' ';
            else
                cout << "0 ";
        }
        cout << endl;
    }

    cout << "Complement of graph B" << endl;
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (i != j)
                cout << (1 && (!graphB[i][j])) << ' ';
            else
                cout << "0 ";
            
            
        }
        cout << endl;
    }
    
    
    // free memory

    for (int i = 0; i < V; i++)
    {
        delete[]graphA[i];
        delete[]graphB[i];
    }

    delete[]graphA;
    delete[]graphB;

    return 0;
}