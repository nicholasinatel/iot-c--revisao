#include <iostream>
#include <cmath>
#include <iomanip>
#include <string.h>

using namespace std;

int senha;

int main()
{
    while(senha != 2002){
        cin >> senha;
        if(senha != 2002){
            cout << "Senha Invalida" << endl;
        } else if ( senha == 2002) {
            cout << "Acesso Permitido" << endl;
            break;
        }
    }
    return 0;
}