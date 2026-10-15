#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float Side, Area;

    //Input
    cout << "Enter Side Length: ";
    cin >> Side;

    //Process

    Area = Side * Side;

    //output
    cout << fixed << setprecision(2);
    cout << "Area of a Square is " << Area << "." << endl;

return 0;

}
