#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int vetor[100];

int main()
{
    for (int i = 0; i < 100; i++)
    { 
        cin >> vetor[i];
        if(vetor[i] == 0)break;
    }
    
    int elem = 0;
    cin >> elem;
    for (int i = 0; i < 100; i++){
        if(vetor[i] == elem){
            cout << "elem: " << vetor[i];
        }
    }
    
    return 0;
}