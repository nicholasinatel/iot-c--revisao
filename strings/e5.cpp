#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstring>

using namespace std;

char chave[25];
char abc[25];
char entrada[100];
char saida[100];
int tam;

int main()
{
    strcpy(chave, "ZYXWVUTSRQPONMLKJIHGFEDCBA");
    strcpy(abc, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");

    cin.getline(entrada, 100);
    tam = strlen(entrada);

    int i = 0;
    int j = 0;

    for (i = 0; i < tam; i++)
    {
        entrada[i] = toupper(entrada[i]);
        j = 0;
        for (j = 0; j <= 25; j++)
        {
            if (entrada[i] == abc[j])
            {
                saida[i] = chave[j];
                cout << saida[i];
            } else if(entrada[i] == ' '){
                cout << " " ;
                j = 26;
            }
        }
    }

    return 0;
}