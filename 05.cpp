#include <iostream>

using namespace std;

int main()
{

    double num1,num2;

    //input

    cout << "Enter Number 1: ";
    cin >> num1;

    cout << "Enter Number 2: ";
    cin >> num2;
    
    //Process and Output

    if (num1 > num2){

        cout << "Maximum Number = " << num1;
    }

    else if (num1 < num2){
        cout << "Maximum Number = " << num2;
    }

    else {
        
        cout << "Both Numbers are equal.";
    }


    return 0;
}
