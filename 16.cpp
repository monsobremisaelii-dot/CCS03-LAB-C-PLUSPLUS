#include <iostream>

using namespace std;


void AreaC(float r1)
{
    float A1 = 3.14 * (r1 * r1);

    cout << "Area: " << A1;
    
}

int main()

{
    float r, A;
    cout <<"Enter Radius: ";
    cin >> r;
    AreaC(r);
    
    return 0;
}
