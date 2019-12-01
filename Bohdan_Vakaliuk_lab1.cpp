#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Enter a: " << endl;
	float a;
	cin >> a;
	if (a <= 0)
	{
		cout << "You entered wrong 'a' !!!" << endl;
		return (0);
	}
	cout << "Enter b: " << endl;
	float b;
	cin >> b;
	if (b <= 0)
	{
		cout << "You entered wrong 'b' !!!" << endl;
	}

	else
	{
		cout << "Square is S=" << 5 * b * a / 3 << endl;
	}
	system("pause");
}
