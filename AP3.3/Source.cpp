#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	if (x < 0)
		y = (R / 6) * (x + 6);
	else
		if ((0 <= x) && (x <= R))
			y = -sqrt((R * R) - (x * x));
		else
			if ((R <= x) && (x < 2*R))
				y = sqrt((R * R) + pow((x - 2 * R), 2));
			else
				y = R;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;		
}