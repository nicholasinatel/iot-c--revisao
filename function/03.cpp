#include <iostream>
#include <cmath>
#include <iomanip>
#include <string.h>
using namespace std;

int sinal(int num)
{
    if (num > 0)
    {
        return 1;
    }
    else if (num < 0)
    {
        return -1;
    }
    else if (num == 0)
    {
        return 0;
    }
}

int main()
{
    int n, resultado;
    cin >> n;
    resultado = sinal(n);
    if(resultado == 1)
        cout <<  "Positivo" << endl;
    else if(resultado == 0)
        cout <<  "Zero" << endl;
    else if(resultado == -1)
        cout <<  "Negativo" << endl;

    return 0;
}