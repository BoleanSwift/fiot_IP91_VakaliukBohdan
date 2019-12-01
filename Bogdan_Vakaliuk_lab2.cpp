#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b, c;
	cout << "Enter a = " << endl;
	cin >> a;
	cout << "Enter b = " << endl;
	cin >> b;
	cout << "Enter c = " << endl;
	cin >> c;
	if (a + b <= c || c + b <= a || a + c <= b)
	{
		cout << "Triangle does not exist" << endl;
		return (0);
	}

	if (a <= 0)
	{
		cout << "You entered wrong a" << endl;
		return(0);
	}
	else if (b <= 0)
	{
		cout << "You entered wrong b" << endl;
		return(0);
	}
	else if (c <= 0)
	{
		cout << "You entered wrong c" << endl;
		return(0);
	}

	if (pow(a, 2) + pow(b, 2) < pow(c, 2))
	{
		cout << "Angle C - obtuse, angles A and B - sharp" << endl;
	}
	else if (pow(b, 2) + pow(c, 2) < pow(a, 2))
	{

		cout << "Angle A - obtuse, angles B and C - sharp" << endl;
	}
	else if (pow(c, 2) + pow(a, 2) < pow(b, 2))
	{
		cout << "Angle B - obtuse, angles A and C - sharp" << endl;
	}


	else if (pow(a, 2) + pow(b, 2) == pow(c, 2))
	{
		cout << "Angle C - right, angles A and B - sharp" << endl;
	}
	else if (pow(b, 2) + pow(c, 2) == pow(a, 2))
	{
		cout << "Angle A - right, angles B and C - sharp" << endl;
	}
	else if (pow(c, 2) + pow(a, 2) == pow(b, 2))
	{
		cout << "Angle B - right, angles A and C - sharp" << endl;
	}
	else cout << "Angles A, B, C - sharp" << endl;
}