#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float Length, Width, Area;

    //Input
    cout << "Enter Length: ";
    cin >> Length;

    cout << "Enter Width: ";
    cin >> Width;

    //Process

    Area = Length * Width;

    //output
    cout << fixed << setprecision(2);
    cout << "Area of a Rectangle is " << Area << "." << endl;

return 0;

}
