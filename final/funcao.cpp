#include <iostream>
#include <cmath>
#include <iomanip>
#include <string.h>
#include <limits>

using namespace std;

void calculaH(int n, float &h)
{
    if (n != 0)
    {
        h = (1 / double(n));
        while (n > 1)
        {
            n -= 1;
            h = h + (1 / double(n));
        }
    }
    else 
        h = 0.0000;
}

int main()
{
    int n;
    float h;

    cin >> n;

    calculaH(n, h);
    cout << fixed << setprecision(4) << h << endl;

    return 0;
}
