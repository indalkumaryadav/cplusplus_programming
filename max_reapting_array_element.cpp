// Write a program in to find the maximum repeating number in a given array

#include "bits/stdc++.h"
using namespace std;

int maximumReaptingElement(int arr[], int size)
{
    int max_repeat = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                max_repeat = arr[i];
            }
        }
    }
    return max_repeat;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 1, 2, 1, 4, 2, 2};
    int n = 10;
    int max = maximumReaptingElement(arr, n);
    cout << max;

    return 0;
}
