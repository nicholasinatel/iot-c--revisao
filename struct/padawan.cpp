#include <iostream>
#include <cmath>
#include <iomanip>
#include <string.h>

using namespace std;

struct dados
{
    char nome[25];
    int pontos;
};

float media;
int maiorP = 0;
char padawan[25];

int main()
{
    int count;
    cout << "Quantos Padawans devemos cadastrar, mestre?" << endl;
    cin >> count ;
    dados troop[count];
    int i = 0;
    while(i < count) {
        cout << "Nome: " << endl;
        cin.ignore();
        cin.getline(troop[i].nome, 25);
        

        cout << "Pontos: " << endl;
        cin >> troop[i].pontos;
        
        media += troop[i].pontos;
        
        if(troop[i].pontos > maiorP){
            maiorP = troop[i].pontos;
            strcpy(padawan,troop[i].nome);
        }
        i++;
    }

    media = media / count;
    
    cout << "Padawan com mais pontos: "<< padawan << endl;
    cout << "Pontos: "<< maiorP << endl;
    cout << fixed << setprecision(2) << "Media da turma: " << media << " pontos"<< endl;

    return 0;
}