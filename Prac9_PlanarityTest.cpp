#include <iostream>
#include "UndirectedGraph.h"

int main(){
    using namespace std;

    UndirectedGraph K(4);

    K.addEdge(0,1);
    K.addEdge(0,2);
    K.addEdge(0,3);

    cout << "Plannarity: " << K.isPlanner() << endl;

    UndirectedGraph K2(5);

    K2.addEdge(0,1);
    K2.addEdge(0,2);
    K2.addEdge(0,3);
    K2.addEdge(0,4);

    K2.addEdge(1,2);
    K2.addEdge(1,3);
    K2.addEdge(1,4);

    K2.addEdge(2,3);
    K2.addEdge(2,4);

    K2.addEdge(3,4);
    
    cout << "Plannarity: " << K2.isPlanner() << endl;

    return 0;
}