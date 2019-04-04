#include <iostream>
using namespace std;

int soma(int x, int y)
{
    return x + y;
}
void soma1(int a, int b, int &s1)
{
    s1 = a + b;
}

int main()
{
    int a, b, s;

    cin >> a >> b;

    s = soma(a, b);

    soma1(a,b,s);

    cout << "soma = " << s << endl;

    return 0;
}