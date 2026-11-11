#include <iostream>

using namespace std;

double AreaR ( double L1, double W1)
    {
        double Area = L1 * W1;

        return Area;
    }
    
int main ()
{
    {
        double L, W, A;
        cout << "Enter Length: ";
        cin >> L;

        cout << "Enter Width: ";
        cin >> W;

        A = AreaR (L, W);

        cout << "Area of the rectangle: " << A;
    }

    return 0;
}
