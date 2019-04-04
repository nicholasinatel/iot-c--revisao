#include <iostream>
#include <cstring>

using namespace std;

char city[20];

int main()
{
    // strcpy(nome, "Nicholas");
    cin.getline(city, 50);
    // cout << city;
    int comp1 = strcmp(city, "Brasilia");
    int comp2 = strcmp(city, "Salvador");
    int comp3 = strcmp(city, "Sao Paulo");
    int comp4 = strcmp(city, "Rio de Janeiro");
    int comp5 = strcmp(city, "Juiz de Fora");
    int comp6 = strcmp(city, "Campinas");
    int comp7 = strcmp(city, "Vitoria");
    int comp8 = strcmp(city, "Belo Horizonte");
    int comp9 = strcmp(city, "Santa Rita do Sapucai");

    if (comp1 == 0)
        cout << 61;
    else if (comp2 == 0)
        cout << 71;
    else if (comp3 == 0)
        cout << 11;
    else if (comp4 == 0)
        cout << 21;
    else if (comp5 == 0)
        cout << 32;
    else if (comp6 == 0)
        cout << 19;
    else if (comp7 == 0)
        cout << 27;
    else if (comp8 == 0)
        cout << 31;
    else if (comp9 == 0)
        cout << 35;
    else 
        cout << "DDD nao cadastrado";    
    return 0;
}