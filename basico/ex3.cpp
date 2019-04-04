#include <iostream>
using namespace std;

int vetor[1000];

int main()
{
    int numV = 0;
    cin >> numV;

    for (int i = 0; i < numV; i++)
    {
        cin >> vetor[i];
    }
    int countMais = 0;
    int countMenAs = 0;

    for (int i = 0; i < numV; i++)
    {
        if (vetor[i] < 1000000)
        {
            countMais += 1;
        }
        if (vetor[i] > 1000000)
        {
            countMenAs += 1;
        }
    }
    cout << countMais << "video(s) com mais de 10M views"
         << "\n";
    cout << countMenAs << "video(s) com menos de 10M views";
    return 0;
}