#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float R, Pi, Area;

    //Input
    cout << "Enter Radius: ";
    cin >> R;

    //Process
    Pi = 3.14;

    Area = Pi * (R * R);

    //output
    cout << fixed << setprecision(2);
    cout << "Area of a Circle is " << Area << "." << endl;

return 0;

}
