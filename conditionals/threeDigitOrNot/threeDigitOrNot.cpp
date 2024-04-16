#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    if (n > 99 and n < 1000)
    {
        cout << "Three digit number";
    }
    else
    {
        cout << "Not a three digit number";
    }
}