#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct dados
{
    int idade;
    float peso;
};

int main()
{
    dados atleta[100];
    int num;

    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> atleta[i].idade;
        cin >> atleta[i].peso;
    }
    //atleta.idade = 28;
    //atleta.peso = 75.4;

    //cin >> atleta[1].idade;
    //cin >> atleta[1].peso;

    for(int i = 0; i < num; i++){
        cout << "Idade: " << atleta[i].idade << endl;
        cout << "Peso: " << atleta[i].peso << endl;
    }
    //cout << "Idade: " << atleta[1].idade << endl;
    //cout << "Peso: " << atleta[1].peso << endl;
    return 0;
}