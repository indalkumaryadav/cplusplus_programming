#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 1, 4, 2, 6, 4, 1, 2, 1};
    int n = 10;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < n; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    // print element of an array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}