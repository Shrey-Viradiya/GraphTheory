// Implement the Havel Hakimi Theorm to check
// whether the given degree sequence is a graph or not

#include<iostream>
#include "HavelHakimi.h"

int main(){
    using namespace std;

    int noDegrees;
    cout << "Enter the number of degrees : ";
    cin >> noDegrees;

    cout << "Enter the degree sequence: " << endl;
    int *degrees = new int[noDegrees]{0};

    for (int i = 0; i < noDegrees; i++)
    {
        cin >> degrees[i];
    }    

    applyHavelHakimi(degrees, noDegrees);

    return 0;
}