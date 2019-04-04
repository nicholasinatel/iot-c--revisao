#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct dados
{
    int matricula;
    float np1;
    float np2;
    float media;
};

int main()
{
    dados aluno;
    int num;
    cout << "Digite o seu numero de matricula:" << endl;
    
    
    cin >> aluno.matricula;
    cout << "Digite a nota da primeira prova:" << endl;
    cin >> aluno.np1;
    cout << "Digite a nota da segunda prova:" << endl;
    cin >> aluno.np2;
    
    aluno.media = (2 * aluno.np1 + 3 * aluno.np2)/5;
    
    //atleta.idade = 28;
    //atleta.peso = 75.4;

    //cin >> atleta[1].idade;
    //cin >> atleta[1].peso;

    cout << "Matricula do aluno: " << aluno.matricula << endl;
    cout << fixed << setprecision(2) << "Nota da primeira prova: " << aluno.np1 << endl;
    cout << fixed << setprecision(2) << "Nota da segunda prova: " << aluno.np2 << endl;
    cout << fixed << setprecision(2) << "Media: " << aluno.media << endl;

    return 0;
}