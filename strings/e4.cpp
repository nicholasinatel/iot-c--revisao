#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

char aluno[100];
float media;
double N1;
double N2;
double N3;
double N4;

int main()
{
    int numA = 0;
    cin >> numA;

    for (int i = 0; i < numA; i++)
    {
        cin.ignore();
        cin.getline(aluno, 20);
        cin >> N1;
        cin >> N2;
        cin >> N3;
        cin >> N4;
        media = (N1 + 2 * N2 + 3 * N3 + 4 * N4) / 10;
        cout << setprecision(10) <<  aluno << ": " << media << endl;
    }

    return 0;
}