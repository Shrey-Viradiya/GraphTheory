#pragma once
#include<iostream>
#include<vector>

using namespace std;

void DFS(int start, int **graphCopy, int *visited, int vertices){
    visited[start] = 1;
    for (int i = 0; i < vertices; i++)
    {
        if (graphCopy[start][i] && visited[i]==0)
        {
            // cout << "DFS: " << start << " " << i << endl;
            DFS(i, graphCopy, visited, vertices);
        }
    }
}

void CombiEdges(int *done, vector<pair<int, int>> edgelist, int reqLen, int s, int currLen, bool check[], int l, int **graphCopy, int vertices)
{
    if(currLen > reqLen || *done == 1)
        return;
    else if (currLen == reqLen) {
        for (int i = 0; i < l; i++) {
            if (check[i] == true) {
                // cout << "Pick Edge: " << edgelist[i].first << ", " << edgelist[i].second << endl;
                graphCopy[edgelist[i].first][edgelist[i].second] = 0;
                graphCopy[edgelist[i].second][edgelist[i].first] = 0;
            }
        }

        int *visited = new int[vertices]{0};
        DFS(0, graphCopy, visited, vertices);

        int success = 0;
        for (int k = 0; k < vertices; k++)
        {
            if(visited[k] == 0){
                success = 1;
                break;
            }
        }
        delete[]visited;

        if (success)
        {
            for (int i = 0; i < l; i++) {
                if (check[i] == true) {
                    cout << "Edge: " << edgelist[i].first << "<->" << edgelist[i].second << endl;
                    graphCopy[edgelist[i].first][edgelist[i].second] = 1;
                    graphCopy[edgelist[i].second][edgelist[i].first] = 1;
                }
            }
            *done = 1;
        }
        else{
            for (int i = 0; i < l; i++) {
                if (check[i] == true) {
                    graphCopy[edgelist[i].first][edgelist[i].second] = 1;
                    graphCopy[edgelist[i].second][edgelist[i].first] = 1;
                }
            }
        }
        return;
    }
    if (s == l) {
        return;
    }
    check[s] = true;
    CombiEdges(done, edgelist, reqLen, s + 1, currLen + 1, check, l, graphCopy, vertices);
    check[s] = false;
    CombiEdges(done, edgelist, reqLen, s + 1, currLen, check, l, graphCopy, vertices);
}