

#include <iostream>
using namespace std;

int main()
{
	float a, b, c, x, d;
	cout << "Podaj a:", cin >> a;
	cout << "Podaj b:", cin >> b;
	cout << "Podaj c:", cin >> c;
	d = (b * b) - (4 * a * c);

	if (d > 0)
		cout << "2 pierwiastki";
	else if (d == 0)
		cout << "1 pierwiastek";
	else if (d < 0)
		cout << "0 pierwiastkow";


}

