#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstring>

using namespace std;

int matriz[3][3];
int masc[3][3];
int femi[3][3];
int soma = 0;

int main()
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int input;
            cin >> input;
            matriz[i][j] = input;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (matriz[0][i] == 1)
        {
            soma += 1;
        }
    }
    if (soma == 3)
        cout << "MASCULINO" << endl;
    else if (soma == 1)
        cout << "FEMININO" << endl;

    return 0;
}