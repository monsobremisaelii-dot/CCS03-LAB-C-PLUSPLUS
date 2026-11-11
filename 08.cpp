#include <iostream>

using namespace std;

int main() {

//Input

float N;

cout << "Enter a Number: ";
cin >> N;

// Process and Output

if (N == 0){
    cout << "The Number is 0.";
}

else if (N > 0){
    cout << "The Number is Positive. ";
}

else {
    cout << "The Number is Negative.";
}
    
    return 0;
}
