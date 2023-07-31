#include <bits/stdc++.h>

using namespace std;

int main()
{
    double base, area, perimetro, altura, diagonal;

    cout << "Base do retangulo: ";
    cin >> base;
    cout << "Altura do retangulo: ";
    cin >> altura;

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base, 2) + pow(altura, 2));

    cout << fixed << setprecision(4);
    cout << "AREA: " << area;
    cout << "\nPERIMETRO: " << perimetro;
    cout << "\nDIAGONAL: " << diagonal << endl;

    return 0;
}
