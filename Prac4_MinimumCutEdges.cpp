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

    UndirectedGraphMatrix graphB("Kirchoff", 8);

    // adding some edges in graph A

    //  0 - 1 --- 4 - 5
    //  | x |     | x |
    //  2 - 3 --- 6 - 7

    graphB.addEdge(0,1);
    graphB.addEdge(2,3);
    graphB.addEdge(0,3);
    graphB.addEdge(1,2);
    graphB.addEdge(0,2);
    graphB.addEdge(1,3);
    graphB.addEdge(4,5);
    graphB.addEdge(5,6);
    graphB.addEdge(6,7);
    graphB.addEdge(7,4);
    graphB.addEdge(4,6);
    graphB.addEdge(5,7);
    graphB.addEdge(1,4);
    graphB.addEdge(3,6);

    graphB.displayGraph();

    graphB.minimumCutVertex();

    return 0;
}
