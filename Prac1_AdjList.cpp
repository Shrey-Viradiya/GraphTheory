// Implement the graph operation for union, intersection,
// compliment and subtraction of the two different graphs

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

    cout << "GraphA - GraphB" << endl;
    UndirectedGraph Subt_A_B = graphA.Subtraction(graphB);
    Subt_A_B.displayGraph();

    cout << "~GraphA" << endl;
    UndirectedGraph Comp_A = graphA.Complement();
    Comp_A.displayGraph();

    return 0;
}