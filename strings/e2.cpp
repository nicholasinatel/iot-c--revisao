#include <iostream>
#include <cstring>

using namespace std;

char animal[20];

int main()
{
    // strcpy(nome, "Nicholas");
    cin.getline(animal, 50);
    // cout << animal;
    int vertebrado = strcmp(animal, "vertebrado");
    int invertebrado = strcmp(animal, "invertebrado");

    if (vertebrado == 0)
    {
        cin.getline(animal, 50);
        int ave = strcmp(animal, "ave");
        int mamifero = strcmp(animal, "mamifero");
        if (ave == 0)
        {
            cin.getline(animal, 50);
            int carnivoro = strcmp(animal, "carnivoro");
            int onivoro = strcmp(animal, "onivoro");
            if (carnivoro == 0)
            {
                cout << "aguia";
            }
            else if (onivoro)
            {
                cout << "pomba";
            }
        }
        else if (mamifero == 0)
        {
            cin.getline(animal, 50);
            int herbivoro = strcmp(animal, "herbivoro");
            int onivoro = strcmp(animal, "onivoro");
            if (onivoro == 0)
            {
                cout << "homem";
            }
            else if (herbivoro)
            {
                cout << "vaca";
            }
        }
    }
    else if (invertebrado == 0)
    {
        cin.getline(animal, 50);
        int inseto = strcmp(animal, "inseto");
        int anelideo = strcmp(animal, "anelideo");
        if (inseto == 0)
        {
            cin.getline(animal, 50);
            int herbivoro = strcmp(animal, "herbivoro");
            int hematofago = strcmp(animal, "hematofago");
            if (hematofago == 0)
            {
                cout << "pulga";
            }
            else if (herbivoro == 0)
            {
                cout << "lagarta";
            }
        }
        else if (anelideo == 0)
        {
            cin.getline(animal, 50);
            int herbivoro = strcmp(animal, "herbivoro");
            int hematofago = strcmp(animal, "hematofago");
            if (hematofago == 0)
            {
                cout << "sanguessuga";
            }
            else if (herbivoro == 0)
            {
                cout << "minhoca";
            }
        }
    }

    return 0;
}