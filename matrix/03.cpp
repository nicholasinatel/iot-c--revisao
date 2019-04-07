#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstring>

using namespace std;

int L,C, DIM, area;

int main()
{
    cin >> L >> C >> DIM;
    int matriz[L][C];

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            int input;
            cin >> input;
            matriz[i][j] = input;
            if (input == 1){
                area += 1;
            }
        }
    }

    area = (DIM * DIM) * area;

    cout << "AREA = " << area << " mm^2"<< endl;


    return 0;
}