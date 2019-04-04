#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

char jogador[20];
int idade;
int N;

int main()
{
    cin >> N;
    cin.ignore();
    for (int i = 0; i < N; i++)
    { 
        cin.getline(jogador, 20);
        cin >> idade;
        if (idade >= 18)
            cout << jogador << idade;
    }

    
    return 0;
}