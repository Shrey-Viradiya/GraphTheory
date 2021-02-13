// Implement the CPP solution for checking isomorphic graphs

// Checking isomorphism is not solved
// In this practical only necessary conditions are checked
// and and additional check is performed which fails in 
// some cases like Euler and Kirchhoff

#include "UndirectedGraphMatrix.h"

int main(){

    using namespace std;
    
    UndirectedGraphMatrix graphA("Euler", 10);
    UndirectedGraphMatrix graphB("Kirkman", 3);
    UndirectedGraphMatrix graphC("Kirchhoff", 10);
    UndirectedGraphMatrix graphD("Tesla", 6);
    UndirectedGraphMatrix graphE("Edison", 6);
    UndirectedGraphMatrix graphF("NG", 7);
    UndirectedGraphMatrix graphG("GS", 7);
    
    // adding some edges in graph A
    graphA.addEdge(0,1);
    graphA.addEdge(1,2);
    graphA.addEdge(2,3);
    graphA.addEdge(3,9);
    graphA.addEdge(0,8);
    graphA.addEdge(1,8);
    graphA.addEdge(2,7);
    graphA.addEdge(7,6);
    graphA.addEdge(5,7);
    graphA.addEdge(3,4);

    // adding some edges in graph B
    graphB.addEdge(0,1);
    graphB.addEdge(0,2);

    // adding some edges in graph C
    graphC.addEdge(0,1);
    graphC.addEdge(1,2);
    graphC.addEdge(2,3);
    graphC.addEdge(3,6);
    graphC.addEdge(3,9);
    graphC.addEdge(9,8);
    graphC.addEdge(7,9);
    graphC.addEdge(0,8);
    graphC.addEdge(1,5);
    graphC.addEdge(2,4);

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

    // adding some edges in graph F
    graphF.addEdge(0,1);
    graphF.addEdge(1,2);
    graphF.addEdge(2,3);
    graphF.addEdge(3,4);
    graphF.addEdge(1,5);
    graphF.addEdge(3,6);

    // adding some edges in graph G
    graphG.addEdge(0,1);
    graphG.addEdge(1,2);
    graphG.addEdge(2,3);
    graphG.addEdge(3,4);
    graphG.addEdge(1,5);
    graphG.addEdge(2,6);

    //printing the graphs
    // graphA.displayGraph();
    // graphB.displayGraph();
    // graphC.displayGraph();
    
    // Isomorphism checking
    cout << "--------" << endl;
    cout << "Isomorphism of " << graphA.getName() << " and " << graphB.getName() << " : "<< UndirectedGraphMatrix::CheckIsomorphism(graphA, graphB) << endl;
    cout << "Isomorphism of " << graphA.getName() << " and " << graphC.getName() << " : "<< UndirectedGraphMatrix::CheckIsomorphism(graphA, graphC) << endl;
    cout << "Isomorphism of " << graphD.getName() << " and " << graphE.getName() << " : "<< UndirectedGraphMatrix::CheckIsomorphism(graphD, graphE) << endl;
    cout << "Isomorphism of " << graphF.getName() << " and " << graphG.getName() << " : "<< UndirectedGraphMatrix::CheckIsomorphism(graphF, graphG) << endl;
    cout << "--------" << endl;
    
    return 0;
}