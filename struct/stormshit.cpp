#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct dados
{
    int ID;
    float IM;
    float FA;
    float GA;
};

int main()
{
    dados troop[100];
    
    int _id = 1;
    int i = 0;
    while(_id != 0) {
        cout << "Id: " << endl;
        cin >> _id;
        troop[i].ID = _id;
        cout << "IM: " << endl;
        cin >> troop[i].IM;
        cout << "FA: " << endl;
        cin >> troop[i].FA;
        troop[i].GA = (troop[i].IM + troop[i].FA)/2;
        i++;
    }

    float maiorGA = 0;
    int idEscolhido = 0;

    for(int j = 0; j < i - 1; j++){
        if(troop[j].GA > maiorGA){
            maiorGA = troop[j].GA;
            idEscolhido = troop[j].ID;
        }
        // cout << "Id: " << troop[j].ID << endl;
        // cout << fixed << setprecision(2) << "IM: " << troop[j].IM << endl;
        // cout << fixed << setprecision(2) << "FA: " << troop[j].FA << endl;
        // cout << fixed << setprecision(2) << "GA: " << troop[j].GA << endl;
    }
    cout << "Id:" << endl;
    cout << "Stormtrooper escolhido: "<< idEscolhido << endl;
    cout << fixed << setprecision(2) << "GA = " << maiorGA << endl;

    return 0;
}