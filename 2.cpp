#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float Base, Height, Area;

    //Input
    cout << "Enter Base: ";
    cin >> Base;

    cout << "Enter Height: ";
    cin >> Height;

    //Process

    Area = (Base * Height)/2;

    //output
    cout << fixed << setprecision(2);
    cout << "Area of a Triangle is " << Area << "." << endl;

return 0;

}
