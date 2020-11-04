// Write a C++ program to count all the vowels in a given string

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int i, vowel = 0;
    cout << "Enter String" << endl;
    cin >> str;

    // iteration in string in order to access letter
    for (i = 0; i < int(str.size()); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowel++;
        }
    }
    cout << "Number of Vowel in given string is= " << vowel;

    return 0;
}