#include <iostream>
#include <cmath>

using namespace std;

int sumDigits (int n1)
{
    int sum = 0;

    while (n1 != 0)
    {
        sum = sum + abs(n1 % 10);
        n1 = n1 / 10;
    }

    return sum;

}

int main ()
{
    {
        int N, S;
        
        cout << "Enter 2 or more digit number: ";
        cin >> N;

        S = sumDigits (N);

        cout << "Sum of the digits: " << S;

    }

    return 0;
    
}
