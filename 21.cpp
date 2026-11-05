#include <iostream>

using namespace std;

int maxN(int N1, int N2, int maximum);

double areaR(double L1, double W1);

int minN(int M1, int M2, int minimum);

double areaC(double R1);


int main ()
{
    int n1, n2, minimum, maximum = 0;

	cout << "Enter Two Numbers: ";
	cin >> n1 >> n2;
	
	cout << "\nThe maximum value is: " << maxN(n1,n2,maximum);
	
    cout << "\nArea of The Rectangle is: " << areaR(n1,n2);

    cout << "\nThe minimum value is: " << minN(n1,n2,minimum);

    cout << "\nArea of the Circle is: " << areaC(minN(n1,n2,minimum));

    return 0;
	
}
int maxN (int N1,int N2, int maximum)
{
	if (N1 > N2)
	{
		maximum = N1;	
	}
	else 
	{
		maximum = N2;
	}
	return maximum;
}

double areaR (double L1, double W1)
{
    double Area = L1 * W1;

    return Area;
}

int minN(int M1, int M2, int minimum)
{
    if (M1 > M2)
    {
        minimum = M2;
    }
    else 
    {
        minimum = M1;
    }
    return minimum;
}

double areaC(double R1)
{
    const double pi = 3.14;

    double areaOC = (pi * (R1 * R1));
    
    return areaOC;
}
