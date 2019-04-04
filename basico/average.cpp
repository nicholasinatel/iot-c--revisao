#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float AVG;
float A, B;

int main()
{
    cin >> A >> B;

    AVG = ((3.5 * A) + (7.5 * B)) / 11;

    cout << fixed << setprecision(5) << "MEDIA = " << AVG << endl;

    return 0;
}