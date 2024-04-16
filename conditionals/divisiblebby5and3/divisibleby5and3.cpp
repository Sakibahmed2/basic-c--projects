#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    if (n % 5 == 0 && n % 3 == 0)
    {
        cout << "Divisible by 5 and 3";
    }
    else
    {
        cout << "Not divisible by 5 and 3";
    }
}