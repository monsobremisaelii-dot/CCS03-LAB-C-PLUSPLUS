#include <iostream>

using namespace std;

int Maximum(double number[], int size);


int main()
{
    double number[100];
    int size;

    cout << "Enter the size of array: ";
    cin >> size;

    cout << "Enter the needed amount of elements:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> number[i];
    }

    cout << "The Maximum element is: " << Maximum(number, size);

return 0;
}

int Maximum(double number[], int size)
{
    int maximum = number[0];

    for (int i = 0; i < size; i++)
    {
        if (number[i] > maximum)
        {
            maximum = number[i];
        }
    }

    return maximum;
}
