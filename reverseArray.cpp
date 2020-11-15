#include "bits/stdc++.h"
using namespace std;

void reverseArray(int arr[], int size)
{
    int first = 0;
    int last = size - 1;

    while (first < last)
    {
        int temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        first++;
        last--;
    }
}

// display the array
void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Element is " << arr[i] << endl;
    }
}

int main()
{
    int arr[] = {10, 5, 17, 15, 2, 5, 8, 9, 1, 45};
    int n = 10;
    reverseArray(arr, n);

    cout << "Reverse array" << endl;
    displayArray(arr, n);

    return 0;
}
