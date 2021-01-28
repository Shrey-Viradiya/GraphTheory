// Implement the CPP solution for checking isomorphic graphs

#include "UndirectedGraphMatrix.h"

int main(){

    using namespace std;
    
    UndirectedGraphMatrix graphA(4), graphB(3), graphC(4);
    
    // adding some edges in graph A
    graphA.addEdge(0,1);
    graphA.addEdge(0,2);
    graphA.addEdge(0,3);
    graphA.addEdge(0,3);

    // adding some edges in graph B
    graphB.addEdge(0,1);
    graphB.addEdge(0,2);

    // adding some edges in graph C
    graphC.addEdge(2,1);
    graphC.addEdge(2,0);
    graphC.addEdge(2,3);

    //printing the graphs
    graphA.displayGraph();
    graphB.displayGraph();
    graphC.displayGraph();
    
    // Isomorphism checking
    cout << "--------" << endl;
    cout << "Isomorphism of graphA and graphB: " << UndirectedGraphMatrix::CheckIsomorphism(graphA, graphB) << endl;
    cout << "Isomorphism of graphA and graphC: " << UndirectedGraphMatrix::CheckIsomorphism(graphA, graphC) << endl;
    
    // UndirectedGraphMatrix::CheckIsomorphism(graphA, graphC);

    return 0;
}