#include <iostream>
#include <cmath>
#include <iomanip>
#include <string.h>

using namespace std;

struct doador
{
    char tipo[4];      // tipo sanguineo
    double quantidade; // quantidade doada
};

float totalAN;
float totalAP;
float totalBN;
float totalBP;
float totalABN;
float totalABP;
float totalON;
float totalOP;

int main()
{
    int quantidadeCadastro = 0;
    cin >> quantidadeCadastro;

    doador humanos[quantidadeCadastro];

    for (int i = 0; i < quantidadeCadastro; i++)
    {
        char t;
        double qtd;
        cin.ignore();
        cin.getline(humanos[i].tipo, 4);
        cin >> qtd;
        humanos[i].quantidade = qtd;
    }

    for (int i = 0; i < quantidadeCadastro; i++)
    {
        int AN = strcmp(humanos[i].tipo, "A-");
        if (AN == 0)
        {
            cout << "OK" << endl;
            totalAN = totalAN + humanos[i].quantidade;
        }
        int AP = strcmp(humanos[i].tipo, "A+");
        if (AP == 0)
        {
            totalAP = totalAP + humanos[i].quantidade;
        }

        int BN = strcmp(humanos[i].tipo, "B-");
        if (BN == 0)
        {
            totalBN = totalBN + humanos[i].quantidade;
        }
        int BP = strcmp(humanos[i].tipo, "B+");
        if (BP == 0)
        {
            totalBP = totalBP + humanos[i].quantidade;
        }

        int ABN = strcmp(humanos[i].tipo, "AB-");
        if (ABN == 0)
        {
            totalABN = totalABN + humanos[i].quantidade;
        }
        int ABP = strcmp(humanos[i].tipo, "AB+");
        if (ABP == 0)
        {
            totalABP = totalABP + humanos[i].quantidade;
        }

        int ON = strcmp(humanos[i].tipo, "O-");
        if (ON == 0)
        {
            totalON = totalON + humanos[i].quantidade;
        }
        int OP = strcmp(humanos[i].tipo, "O+");
        if (OP == 0)
        {
            totalOP = totalOP + humanos[i].quantidade;
        }
    }
    cout << "A- " << fixed << setprecision(2) << totalAN << endl;
    cout << "A+ " << fixed << setprecision(2) << totalAP << endl;

    cout << "B- " << fixed << setprecision(2) << totalBN << endl;
    cout << "B+ " << fixed << setprecision(2) << totalBP << endl;

    cout << "AB- " << fixed << setprecision(2) << totalABN << endl;
    cout << "AB+ " << fixed << setprecision(2) << totalABP << endl;

    cout << "O- " << fixed << setprecision(2) << totalON << endl;
    cout << "O+ " << fixed << setprecision(2) << totalOP << endl;

    return 0;
}