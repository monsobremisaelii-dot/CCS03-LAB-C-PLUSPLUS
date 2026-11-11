#include <iostream>
using namespace std;

int main()
{
    double num1, num2, num3;

    cout << "Enter Number 1: ";
    cin >> num1;

    cout << "Enter Number 2: ";
    cin >> num2;

    cout << "Enter Number 3: ";
    cin >> num3;

    // Process and Output
    if (num1 < num2 && num1 < num3)
    {
        cout << "Minimum Number = " << num1;
    }
    else if (num2 < num1 && num2 < num3)
    {
        cout << "Minimum Number = " << num2;
    }
    else
    {
        cout << "Minimum Number = " << num3;
    }

    return 0;
}
