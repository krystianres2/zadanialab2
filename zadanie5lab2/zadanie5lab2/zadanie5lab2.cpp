

#include <iostream>
using namespace std;

int main()
{
    float x, y, z;
	cout << "Podaj x:", cin >> x;
	cout << "Podaj y:", cin >> y;
	cout << "Podaj z:", cin >> z;
	if (x >= y && x >= z && y >= z)
		cout << z<<" "<<y<<" "<< x;
	else if (x >= y && x >= z && y <= z)
		cout << y<<" "<< z<<" "<< x;
	else if (x <= y && x<=z && y>=z)
		cout << x<<" "<< z<<" "<< y;
	else if (x <= y && x <= z && y <= z)
		cout << x << " " << y << " " << z;
	else if (z<=x && y>=x && z <= y)
		cout << z<<" "<<x<<" "<< y;
	else if (y <= z && x<=z && x>=y)
		cout << y<<" "<<x<<" "<< z;










}

