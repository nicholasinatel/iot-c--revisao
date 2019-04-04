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
    int media = 0;

    for (int i = 0; i < numA; i++)
    {
        media = vetor[i] + media;
    }

    if (media > 0)
    {
        cout << " A maioria gostou";
    }
    if (media < 0)
    {
        cout << " A maioria nao gostou";
    }
    if (media == 0){
        cout << " Deu empate";
    }
    
    return 0;
}