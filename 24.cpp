#include <iostream>

using namespace std;

int Add(int n1, int n2);
int Maximum( int n1, int n2);




int main()
{
    int first[100],second[100],third[100];
    int s1,s2;

    cout << "Enter the first size of the array: ";
    cin >> s1;

    cout << "Enter the second size of the array: ";
    cin >> s2;

    if (s1 < 1 || s1 > 100 || s2 < 1 || s2 > 100)
    {
        cout << "Sizes must be from 1 to 100!";
    } 

    if (s1 != s2)
    {
        cout << "INVALID! BOTH ARRAYS MUST HAVE THE SAME SIZE.";
        return 0;
    }

    cout << "\nEnter Elements of the first array:\n";

    for (int i = 0; i < s1; i++)
    {
        cin >> first[i];
    }

    cout << "\nEnter elements of the second array:\n";

    for (int i = 0; i < s2; i++)
    {
        cin >> second[i];
    }

    cout << "\nA - Sum of the 2 arrays is: "; 
    
    for (int i = 0; i < s1; i++)
    {
        cout << Add(first[i], second[i]) << " ";    
    }

}

int Add(int n1, int n2)

{
    return n1 + n2;
}
