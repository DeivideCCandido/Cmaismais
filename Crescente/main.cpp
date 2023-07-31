#include <bits/stdc++.h>

using namespace std;

int main()
{
    int X, Y;

    cout << "Digite dois numeros: " << endl;
    cin >> X;
    cin >> Y;

    while (X != Y) {
        if (X < Y) {
            cout << "CRESCENTE!\n";
        }
        else {
            cout << "DECRESCENTE!\n";
        }
    cout << "Digite outros dois numeros: " << endl;
    cin >> X;
    cin >> Y;
    }

    return 0;
}
