#include <iostream>

using namespace std;

float AreaT (float b1, float h1)
    {
        float A1 = (b1 * h1) / 2;

        return A1; 
    }

int main() 
{
    
    {
        float b, h, A;
        cout << "ENTER 2 VARIABLES: ";
        cin >> b >> h;
        A = AreaT (b, h);
        cout << "Area " << A;
    }
    
    return 0;
}
