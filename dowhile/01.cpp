#include <iostream>
#include <cmath>
#include <iomanip>
#include <string.h>

using namespace std;

int A = 1;
int B = 2;

int main()
{
    while(A != B){
        cin >> A;
        cin >> B;
        if(A > B){
            cout << "Decrescente" << endl;
        } else if ( A < B) {
            cout << "Crescente" << endl;
        }
    }
    return 0;
}