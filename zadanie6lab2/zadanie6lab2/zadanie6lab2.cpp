

#include <iostream>
using namespace std;

int main()
{
	string a, b;

	cout << "Czy pada deszcz? ", cin >> a;
	cout << "Czy jest autobus? ", cin >> b;

	if (a == "Tak" && b == "Tak")
		cout << "Wez parasol, Dostaniesz sie na uczelnie"<<endl;
	else if (a == "Tak" && b != "Tak")
		cout << "Nie dostaniesz sie na uczelnie";
	else if (a != "Tak" && b == "Tak")
		cout << "Dostaniesz sie na uczelnie, Milego dnia i pieknej pogody";












}

