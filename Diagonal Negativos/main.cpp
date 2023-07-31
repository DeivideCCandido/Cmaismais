#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, i, j, negativos;

    cout << "Qual a ordem da matriz? ";
    cin >> N;

    int mat[N][N];

    for (i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }
    cout << "DIAGONAL PRINCIPAL: " << endl;
    for (i = 0; i < N; i++) {
        cout << mat[i][i] << " ";
    }
    negativos = 0;
    for (i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            if (mat[i][j] < 0) {
                negativos++;
            }
        }
    }
    cout << "\nQUANTIDADE DE NEGATIVOS = " << negativos << endl;

    return 0;
}
