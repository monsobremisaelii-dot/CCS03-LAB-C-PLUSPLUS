#include <iostream>

using namespace std;

double average(double numbers[]);

int main()
{
    double numbers[10];

    cout << "Enter 10 numbers:\n";

    for (int n = 0; n < 10; n++)
    {
        cin >> numbers[n];
    }

    cout << "Average is: " << average(numbers);



return 0;
}

double average(double numbers[])

{
    double sum = 0;

    for (int n = 0; n < 10; n++)
    {
        sum = sum + numbers[n];
    }

    return sum/10;

}
