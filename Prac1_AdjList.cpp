#include <iostream>
#include "UndirectedGraph.h"
using namespace std;

int main(){

    UndirectedGraph g(4);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.displayGraph();

    return 0;
}