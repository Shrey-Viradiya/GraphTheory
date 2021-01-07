#include <iostream>
#include "UndirectedGraph.h"
using namespace std;

int main(){

    cout << "GraphA" << endl;
    UndirectedGraph graphA(4);
    graphA.addEdge(0,1);
    graphA.addEdge(1,2);
    graphA.displayGraph();

    cout << "GraphB" << endl;
    UndirectedGraph graphB(4);
    graphB.addEdge(1,2);
    graphB.addEdge(2,3);
    graphB.displayGraph();

    cout << "UnionGraph" << endl;
    UndirectedGraph UnionGraph = UndirectedGraph::Union(graphA, graphB);
    UnionGraph.displayGraph();

    cout << "IntersectionGraph" << endl;
    UndirectedGraph IntersectionGraph = UndirectedGraph::Intersection(graphA, graphB);
    IntersectionGraph.displayGraph();

    return 0;
}