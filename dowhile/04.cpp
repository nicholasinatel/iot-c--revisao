#include <iostream>
#include <cmath>
#include <iomanip>
#include <string.h>

using namespace std;

float X, Y, media;
int c = 0;
int main()
{
    while (1)
    {
        cin >> X;
        if (X <= 10 && X >= 0)
        {
            media += X;
            c += 1;
            break;
        }
        else if (X > 10 || X < 0)
        {
            cout << "nota invalida" << endl;
        }
    }
    while (1)
    {
        cin >> Y;
        if (Y <= 10 && Y >= 0)
        {
            media += Y;
            c += 1;
            break;
        }
        else if (Y > 10 || Y < 0)
        {
            cout << "nota invalida" << endl;
        }
    }

    if (c > 1)
    {
        media = media / 2;
        cout << fixed << setprecision(2) << "media = " << media << endl;
    }

    return 0;
}