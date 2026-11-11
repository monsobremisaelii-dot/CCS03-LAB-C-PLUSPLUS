#include <iostream>

using namespace std;

int main() {

//Input

int N;
    
cout << "Please Enter a Number: ";
cin >> N;

//Process and Output

int R = N % 2;

if (R == 0){

    cout << "The Number is Even.";
}
    
else {

    cout << "The Number is Odd. ";
}
    
    return 0;
}
