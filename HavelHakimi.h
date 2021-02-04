#pragma once

#include<iostream>
#include<algorithm>

bool applyHavelHakimi(int *degrees, int noDegrees){
    using namespace std;

    cout << "Applying Havel-Hakimi" << endl;
    cout << "---------------------" << endl;
    
    for (int i = 0; i < noDegrees; i++)
    {
        //sort the remaining
        std::sort(degrees+i, degrees+noDegrees, greater<int>());

        // print the remaining
        for (int i = 0; i < noDegrees; i++)
        {
            cout << degrees[i] << " ";
        }
        cout << endl;
        

        // reduce degrees
        for (int j = 0; j < degrees[i]; j++)
        {
            if(i+j+1 >= noDegrees){
                cout << "Not enough vertices\nGraph is not possible" << endl;
                return false;
            }
            --degrees[i+j+1];
        }

        // check for ending condition
        bool zeros = true;
        for (int j = i+1; j < noDegrees; j++)
        {
            if (degrees[j] < 0)
            {
                cout << "Negative Degree encountered\nGraph is not possible" << endl;
                return false;
            }
            if (degrees[j] != 0) zeros = false;            
        }
        if (zeros){
            // print the remaining
            for (int i = 0; i < noDegrees; i++)
            {
                cout << degrees[i] << " ";
            }
            cout << endl;
            cout << "All the remaining are zero\nGraph is possible" << endl;
            return true;
        }
    }
    return true;
}