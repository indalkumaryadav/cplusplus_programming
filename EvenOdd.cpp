//Write a program in C to check a given number is even or odd using the function.

#include <iostream>
using namespace std;

int evenOdd(int n)
{
    if (n % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
    return 0;
}
int main()
{
    int n;
    cout << "Enter Number" << endl;
    cin >> n;
    evenOdd(n);
    return 0;
}
