// Implement the CPP solution for checking isomorphic graphs

#include "UndirectedGraphMatrix.h"

int main(){

    using namespace std;
    
    UndirectedGraphMatrix graphA("Euler", 4);
    UndirectedGraphMatrix graphB("Kirkman", 3);
    UndirectedGraphMatrix graphC("Kirchhoff", 4);
    UndirectedGraphMatrix graphD("Tesla", 6);
    UndirectedGraphMatrix graphE("Edison", 6);
    
    // adding some edges in graph A
    graphA.addEdge(0,1);
    graphA.addEdge(0,2);
    graphA.addEdge(0,3);

    // adding some edges in graph B
    graphB.addEdge(0,1);
    graphB.addEdge(0,2);

    // adding some edges in graph C
    graphC.addEdge(2,1);
    graphC.addEdge(2,0);
    graphC.addEdge(2,3);

    // adding some edges in graph D
    graphD.addEdge(0,1);
    graphD.addEdge(1,2);
    graphD.addEdge(2,3);
    graphD.addEdge(3,4);
    graphD.addEdge(2,5);

    // adding some edges in graph E
    graphE.addEdge(0,1);
    graphE.addEdge(1,2);
    graphE.addEdge(2,3);
    graphE.addEdge(3,4);
    graphE.addEdge(3,5);

    //printing the graphs
    graphA.displayGraph();
    graphB.displayGraph();
    graphC.displayGraph();
    
    // Isomorphism checking
    cout << "--------" << endl;
    cout << "Isomorphism of " << graphA.getName() << " and " << graphB.getName() << " : "<< UndirectedGraphMatrix::CheckIsomorphism(graphA, graphB) << endl;
    cout << "Isomorphism of " << graphA.getName() << " and " << graphC.getName() << " : "<< UndirectedGraphMatrix::CheckIsomorphism(graphA, graphC) << endl;
    cout << "Isomorphism of " << graphD.getName() << " and " << graphE.getName() << " : "<< UndirectedGraphMatrix::CheckIsomorphism(graphD, graphE) << endl;
    cout << "--------" << endl;
    
    return 0;
}