#include <iostream>

using namespace std;


long long factorial(int FR);

int main()
{
    int number;

    cout << "Enter a Number: ";
    cin >> number;

    if (number < 1 || number > 20)
    {
        cout << "PLEASE ENTER A NUMBER FROM 1 TO 20 ONLY. ";
    }
    else 
    {
        cout << "\nThe factorial of the number is: " << factorial(number);
    }

    return 0;

}

long long factorial(int FR)

{
    long long result = 1;

    for (int F = 1; F <= FR; F++)
    {
        result = result * F;
    }

    return result;

}
