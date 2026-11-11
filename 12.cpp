#include <iostream>
using namespace std;

int main() 
{
    int number;
    cout <<"enter a number: ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
            for (int e = 1; e <= number; e++)
        {
            cout <<"*";
        }
        
            cout << "\n";
    }
        
return 0;
}
