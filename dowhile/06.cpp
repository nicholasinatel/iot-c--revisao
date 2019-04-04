#include <iostream>
#include <cmath>
#include <iomanip>
#include <string.h>

using namespace std;

int X, Y;
int inter = 0;
int gremio = 0;
int empate = 0;
int mode = 1;
int conta = 0;
int main()
{
    while (mode != 2)
    {
        if (mode == 1)
        {
            cin >> X >> Y;
            if (X > Y)
                inter++;
            else if (X < Y)
                gremio++;
            else if (X == Y)
                empate++;
        }
        conta++;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> mode;
    }
    cout << conta << " grenais" << endl;
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio << endl;
    cout << "Empates:" << empate << endl;

    if (inter > gremio)
        cout << "Inter venceu mais" << endl;
    else if (inter < gremio)
        cout << "Gremio venceu mais" << endl;
    else if (inter == gremio)
        cout << "Nao houve vencedor" << endl;

    return 0;
}