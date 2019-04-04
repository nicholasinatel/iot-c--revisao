#include <iostream>
#include <cmath>
#include <iomanip>
#include <string.h>

using namespace std;

struct dados
{
    char nome[25];
    int base;
};

bool noJedi = true;

int main()
{
    int count;
    cout << "Quantos cavaleiros Jedi devemos cadastrar, mestre?" << endl;
    cin >> count;
    dados jedi[count];

    int i = 0;
    while (i < count)
    {
        cout << "Nome: " << endl;
        cin.ignore();
        cin.getline(jedi[i].nome, 25);

        cout << "Base: " << endl;
        cin >> jedi[i].base;
        i++;
    }

    char consulta[25];
    cout << "Qual cavaleiro deseja consultar?" << endl;
    cin.ignore();
    cin.getline(consulta, 25);
    for (int contador = 0; contador < count; contador++)
    {
        if (strcmp(consulta, jedi[contador].nome) == 0)
        {
            cout << "Este cavaleiro esta na base " << jedi[contador].base << endl;
            noJedi = false;
        }
    }
    if (noJedi == true)
    {
        cout << "Este cavaleiro nao esta cadastrado" << endl;
    }

    return 0;
}