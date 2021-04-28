#include <iostream>
#include "UndirectedGraphMatrix.h"

int main(){
    using namespace std;

    UndirectedGraphMatrix K("Kirchoff", 6);

    K.addEdge(0,1);
    K.addEdge(0,2);
    K.addEdge(0,3);
    K.addEdge(0,4);
    K.addEdge(0,5);
    K.addEdge(1,2);
    K.addEdge(1,3);
    K.addEdge(1,4);
    K.addEdge(2,3);
    K.addEdge(2,4);
    K.addEdge(3,4);

    int m = 1;
    int *solution = nullptr;

    while (true) {
        solution = K.SolveGraph(m);
        if (solution != nullptr) {
            break;
        }
        ++m;
    }

    cout << "Minimum Number of Different colors \nrequired to Color the graph:" << m << endl;
    for (int i = 0; i < K.getNoVertices(); i++)
    {
        cout << solution[i] << " " ;
    }
    cout << endl;

    return 0;
}

