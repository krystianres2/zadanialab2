

#include <iostream>
using namespace std;

int main()
{
    float a, b, c, x, d;
    cout << "Podaj a:", cin >> a;
    cout << "Podaj b:", cin >> b;
    cout << "Podaj c:", cin >> c;
    d = (b * b) - (4 * a * c);

    if (d > 0) {
        cout << "1 pierwiastek: " << (-b + sqrt(d)) / (2 * a) << endl;
        cout << "2 pierwiastki: " << (-b - sqrt(d)) / (2 * a) << endl;
    }
    else if (d == 0)
        cout << "pierwiastek:" << -b / (2 * a) << endl;
    else
        cout << "brak pierwiastkow";




}

