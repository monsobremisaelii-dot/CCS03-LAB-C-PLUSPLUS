
// NOTE!! THIS IS INCREASING SPACE AND DECREASING STAR

#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout <<"enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = i; j <=n; j++){
            cout<<"   ";
        }
        for (int k = 1; k <= i; k++){
            cout<< " * ";
        }
    
    
        cout << "\n";
    }
        
return 0;
}
