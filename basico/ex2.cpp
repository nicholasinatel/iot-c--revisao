#include <iostream>
using namespace std;

int vetor[1000];

int main()
{
    cout << "\n";
    cout << "Entre com o numero de usuarios\n";
    int numUser = 0;
    cin >> numUser;

    for (int i = 0; i < numUser; i++)
    {
        cin >> vetor[i];
    }
    cout << "\n";
    for (int i = 0; i < numUser; i++)
    {
        cout << vetor[i];
        cout << ", ";
    }
    cout << "\n";
    return 0;
}