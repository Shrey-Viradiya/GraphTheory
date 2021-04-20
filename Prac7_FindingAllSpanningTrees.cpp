// Find all the spanning trees using 
// 1) cyclic interchange for a given graph
// 2) Cayley's formula for a graph of n vertices

#include <iostream>
#include "UndirectedGraph.h"

int main() {
    using namespace std;

    UndirectedGraph K(4);
    K.addEdge(0, 1);
    K.addEdge(0, 2);
    K.addEdge(0, 3);
    K.addEdge(1, 2);

   K.CyclicExchange();

   return 0;
}