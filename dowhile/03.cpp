#include <iostream>
#include <cmath>
#include <iomanip>
#include <string.h>

using namespace std;

int X,Y;

int main()
{
    while(1){
        cin >> X;
        cin >> Y;
        if(X > 0 && Y > 0){
            cout << "primeiro" << endl;
        } else if (X > 0 && Y < 0) {
            cout << "quarto" << endl;
        } else if(X < 0 && Y < 0) {
            cout << "terceiro" << endl;
        } else if(X < 0 && Y > 0) {
            cout << "segundo" << endl;
        } else if(X == 0 || Y == 0) {
            break;
        }
    }
    return 0;
}