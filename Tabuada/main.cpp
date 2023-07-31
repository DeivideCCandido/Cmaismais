#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, i, resultado;

    cout << "Deseja a tabuada para qual valor ?  ";
    cin >> N;

    resultado = 0;
    for (i = 1; i <= 10; i++) {
        resultado = N * i;
        cout << N << " x " << i << " = " << resultado << endl;
    }

    return 0;
}
