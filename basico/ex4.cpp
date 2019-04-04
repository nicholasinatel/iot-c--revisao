#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int vetor[1000];

int main()
{
    int numA = 0;
    cin >> numA;

    for (int i = 0; i < numA; i++)
    {
        cin >> vetor[i];
    }
    double media = 0;
    int alunosACIMA = 0;
    int alunosABAIXO = 0;

    for (int i = 0; i < numA; i++) {
        media = vetor[i] + media;
    }
    media = media/numA;

    for (int i = 0; i < numA; i++)
    {
        if (vetor[i] < media)
        {
            alunosABAIXO += 1;
        }
        if (vetor[i] > media)
        {
            alunosACIMA += 1;
        }
    }
    cout << setprecision(4) << " Media da turma: " <<  media;
    cout << "\n";
    cout << " Alunos com nota acima da media: " << alunosACIMA;
    cout << "\n";
    cout << " Alunos com nota abaixo da media:  " << alunosABAIXO;
    return 0;
}