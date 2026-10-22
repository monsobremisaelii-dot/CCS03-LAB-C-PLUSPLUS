#include <iostream>

using namespace std;

int main() 
{

    int Num;
    
    cout << "Enter number: ";
    cin >> Num;


    for (int N = 1; N < Num; N++)
    {
        for (int V = 1; V < N; V++)
        {
            cout << "* ";
        }
            cout << "\n";
    }    
    return 0;
}
