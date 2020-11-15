#include "bits/stdc++.h"
using namespace std;

// inserting element in array
void insertingElementArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element" << endl;
        cin >> arr[i];
    }
}

// selection sort algorithm
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Displaying element in array
int displayArrayElement(int arr[], int size)
{

    int i;
    for (i = 0; i < size; i++)
    {
        cout << "Element is " << arr[i] << endl;
    }

    return 0;
}

int main()
{
    int n;
    cout << "Enter Array length" << endl;
    cin >> n;

    int arr[n];

    insertingElementArray(arr, n);

    selectionSort(arr, n);

    cout << "Displaying array \n";
    displayArrayElement(arr, n);

    return 0;
}
