// Find the maximum and minimum element in an array

#include "bits/stdc++.h"
using namespace std;

void minMaxArray(int arr[], int size)
{
    int max = arr[0], min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Maximum Element is " << max << endl;
    cout << "Minimum Element is " << min << endl;
}

int main()
{
    int arr[10] = {10, 10, 2, 3, 5, 12, 2, 6, 70, 2};
    int n = 10;
    minMaxArray(arr, n);

    return 0;
}
