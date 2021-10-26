

#include <iostream>
using namespace std;

int main()
{
    float a, b, x;
    cout << "Podaj a:", cin >> a;
    cout << "Podaj b:", cin >> b;

    if (a == 0)
        cout << "rownanie sprzeczne" << endl;
    else
        cout << "x = " << -b / a << endl;
}

