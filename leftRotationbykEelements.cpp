#include "./stdc++.h"
using namespace std;

// Use of nested looping
// k = 2 means (2 times array rotate karaycha aahe)
// Outer loop : k times task perform karaycha aahe
// Inner loop : actual task => array la 1 step ne rotate karne
//
// Conclusion:
// Outer loop => kitne steps rotate karayche (number of rotations)
// Inner loop => ek rotation cha actual code (1 step rotate karne)


void rightRotateArray(int arr[], int n, int k)
{
    // Outer loop => kitne steps rotate karayche aahet
    for (int step = 1; step <= k; step++)
    {
        // Last element temporarily store kara
        int temp = arr[n - 1];

        // Inner loop => ek ek element 1 place right shift kara
        for (int i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }

        // Temp element first position la thewa
        arr[0] = temp;
    }
}

void displayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2; // kitne steps right rotate karayche

    cout << "Original Array: ";
    displayArray(arr, n);

    rightRotateArray(arr, n, k);

    cout << "Array after " << k << " right rotations: ";
    displayArray(arr, n);

    return 0;
}