#include <iostream>
using namespace std;

int binarySearch(int arr[], int searchElement, int size)
{
    int i, first = 0, last = size - 1;
    int element = 0;
    for (i = 0; i < size - 1; i++)
    {
        int mid = (first + last) / 2;

        if (searchElement == arr[mid])
        {
            element = searchElement;
        }
        else if (searchElement > arr[mid])
        {
            first = mid - 1;
        }
        else
        {
            last = mid + 1;
        }
    }

    if (element != 0)
    {
        cout << "Element " << element << " found";
    }
    else
    {

        cout << "Element not found";
    }

    return 0;
}

int main()
{
    int size;
    cout << "Enter size of an array" << endl;
    cin >> size;
    int arr[size];
    int i;
    for (i = 0; i < size; i++)
    {
        cout << "Enter Element" << endl;
        cin >> arr[i];
    }

    int serachElement;
    cout << "Enter Search Element" << endl;
    cin >> serachElement;

    binarySearch(arr, serachElement, size);

    return 0;
}