#include <iostream>

using namespace std;

double AreaS ( double S1)
    {
        double Area = S1 * S1;

        return Area;
    }

int main ()
{
    {
        double S, A;
        cout << "Enter Side: ";
        cin >> S;

        A = AreaS (S);

        cout << "Area of Square: " << A;
    }

    return 0;
}
