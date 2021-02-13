// Implement the Code for finding Minimum
// cut edges and cut vertices for a graph

#include "UndirectedGraphMatrix.h"
#include <iostream>

int main(){
    using namespace std;

    UndirectedGraphMatrix graphA("Euler", 8);

    // adding some edges in graph A

    //   1        5
    //  / \      / \
    // 0   2----4   6
    //  \ /      \ /
    //   3        7

    graphA.addEdge(0,1);
    graphA.addEdge(1,2);
    graphA.addEdge(2,3);
    graphA.addEdge(0,3);
    graphA.addEdge(4,5);
    graphA.addEdge(5,6);
    graphA.addEdge(6,7);
    graphA.addEdge(7,4);
    graphA.addEdge(2,4);

    graphA.displayGraph();

    graphA.minimumCutSet();

    return 0;
}
