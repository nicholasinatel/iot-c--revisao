#include <iostream>
#include <cmath>
#include <iomanip>
#include <string.h>
using namespace std;

int calc(float h, char s, float &peso)
{
    if (s == 'M')
    {
        peso = 72.7 * h - 58;
    }
    else if (s == 'F')
    {
        peso = 62.1 * h - 44.7;
    }
    return 0;
}

int main()
{
    float a, s, p;
    char b;

    cin >> a >> b;

    calc(a, b, p);

    cout << fixed << setprecision(2) << "Peso ideal = " << p << " kg" << endl;

    return 0;
}