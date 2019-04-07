#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int N;

int main()
{
    cin >> N;
    int vetor[N];
    for (int i = 0; i < N; i++)
    {
        cin >> vetor[i];
    }

    int contador = 0;
 
    for (int i = 0; i < N; i++)
    {
        if (vetor[i] % 3 != 0)
        {
            contador++;
        }
    }

    cout << contador << " numeros sao multiplos de 3" << endl;

    return 0;
}