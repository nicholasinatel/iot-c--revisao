#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstring>

using namespace std;

int A, B, C, D;

int main()
{
    double matriz1[2][2];
    double matrizT[2][2];
    double soma1, soma2, det;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int input;
            cin >> input;
            matriz1[i][j] = input;

            if (i == 0 && j == 0)
            {
                soma1 = input;
            }
            if (i == 1 && j == 1)
            {
                soma1 = soma1 * input;
            }

            if (i == 0 && j == 1)
            {
                soma2 = input;
            }
            if (i == 1 && j == 0)
            {
                soma2 = soma2 * input;
            }
        }
    }

    cout << "M = [";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            double number;
            number = matriz1[i][j];
            cout << fixed << setprecision(4) << number << " ";
        }
        if (i == 0)
            cout << ";";
    }
    cout << "]" << endl;

    det = soma1 - soma2;

    cout << "Determinante de M = " << setprecision(4) << det << endl;

    cout << "Transposta de M = [";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrizT[i][j] = matriz1[j][i];
            cout << fixed << setprecision(4) << matrizT[i][j] << " ";
        }
        if (i == 0)
            cout << ";";
    }
    cout << "]" << endl;

    return 0;
}