#include <iostream>
#include <cmath>
#include <iomanip>
#include <string.h>
using namespace std;

float delta(float a, float b, float c)
{
    return pow(b, 2) - 4 * a * c;
}
void bhaskara(float a, float b, float D)
{
    float x1, x2;
    if (D > 0)
    {
        x1 = (-b - sqrt(D)) / (2 * a);
        x2 = (-b + sqrt(D)) / (2 * a);
        cout << fixed << setprecision(2) << "x1 = " << x1 << endl;
        cout << fixed << setprecision(2) << "x2 = " << x2 << endl;
    }
    else if (D == 0)
    {
        x1 = -b / (2 * a);
        cout << fixed << setprecision(2) << "x = " << x1 << endl;
    }
    else if (D < 0)
    {
        cout << "Nao ha raizes reais " << endl;
    }
}

int main()
{
    float a, b, c, D;
    cin >> a >> b >> c;
    D = delta(a, b, c);
    bhaskara(a,b,D);

    return 0;
}