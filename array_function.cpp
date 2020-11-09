#include <iostream>
using namespace std;
// Array Insertion
int arrayInsert(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i << endl;
        cin >> arr[i];
    }
    return 0;
}

// Array Traversing
int displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << i << " Element is = " << arr[i] << endl;
    }

    return 0;
}

int main()
{
    int n;
    cout << "Enter Number" << endl;
    cin >> n;
    int arr[n];

    arrayInsert(arr, n);
    displayArray(arr, n);
}