#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstring>

using namespace std;

int L, C;

int main()
{
    cin >> L >> C;
    int matriz1[L][C];
    int matriz2[L][C];
    int matrizRESULTA[L][C];

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            int input;
            cin >> input;
            matriz1[i][j] = input;
            // cout << matriz1[i][j] << " ";
        }
        // cout << endl;
    }

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            int input;
            cin >> input;
            matriz2[i][j] = input;
            // cout << matriz2[i][j] << " ";
        }
        // cout << endl;
    }
    // cout << endl;

    for (int i = 0; i < L; ++i)
    {
        for (int j = 0; j < C; ++j)
        {
            matrizRESULTA[i][j] = matriz1[i][j] + matriz2[i][j];
            cout << matrizRESULTA[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}