#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstring>

using namespace std;

int mat[10][10];
int L, C;
int main()
{
    cin >> L >> C;

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            int X;
            cin >> X;
            mat[i][j] = X;
        }
    }

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << mat[i][j] << endl;
        }
    }
    return 0;
}

