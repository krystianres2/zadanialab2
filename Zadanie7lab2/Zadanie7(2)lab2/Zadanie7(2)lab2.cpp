
#include <iostream>
using namespace std;
int main()
{
    string a, b;

    cout << "Czy jest znizka na samochod? ", cin >> a;
    cout << "Czy otrzymales podwyzke? ", cin >> b;

    if (a == "Nie" && b == "Tak")
        cout << "Mozesz kupic samochod!, Znizki na samochod nie ma";
    else if (a == "Nie" && b == "Nie")
        cout << "Zakup samochodu trzeba odlozyc na pozniej..., Znizki na samochod nie ma";
    else if (a == "Tak" || b == "Tak")
        cout << "Mozesz kupic samochod!";









}

