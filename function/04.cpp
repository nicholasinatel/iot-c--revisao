#include <iostream>
#include <cmath>
#include <iomanip>
#include <string.h>
using namespace std;

int f1(int x)
{
    return 2 * pow(x, 2) + 3 * x - 1;
}
int f2(int x)
{
    return pow(x, 3);
}
int f3(int y)
{
    return pow(y, 3);
}
int main()
{
    int a, b, c, x, y;
    cin >> x >> y;

    a = f1(x);
    cout << "a = " << a << endl;

    b = f2(x);
    cout << "b = " << b << endl;

    cout << "c = " << f3(y) << endl;
    return 0;
}

