#include "./stdc++.h"
using namespace std;
// Demonstration of Nested looping

void nestedLooping()
{
    for(int j = 1; j <= 4; j++)
    {
        cout << j <<  " execution..." << endl;
        for(int i = 1; i <= 2; i++)
        {
            cout << i << " st Task done..." << endl;
        }
        cout << endl;
    }
}

int main()
{
    nestedLooping();

    return 0;
}