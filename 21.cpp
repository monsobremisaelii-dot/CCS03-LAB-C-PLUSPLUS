#include <iostream>
using namespace std;


long long factorial(int FR);

int main()
{
    int number = 0;

    cout << "Enter a Number: ";
    cin >> number;

    if (number < 0 || number > 20)
    {
        cout << "Please enter a Positive number. ";
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
