#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, i, cont;
    double media, soma, porcentagem;

    cout << "Quantas pessoas serao digitadas ? ";
    cin >> N;

    string nome[N];
    int idade[N];
    double altura[N];

    for (i = 0; i < N; i++) {
        cout << "Dados da " << i+1 << "a pessoa: " << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cout << "Idade: ";
        cin >> idade[i];
        cout << "Altura: ";
        cin >> altura[i];
    }
    soma = 0;
    for (i = 0; i < N; i++) {
        soma = soma + altura[i];
    }
    media = soma / N;
    cout << fixed << setprecision(2);
    cout << "\nAltura media: " << media;

    cont = 0;
    for (i = 0; i < N; i++) {
        if (idade[i] < 16) {
            cont = cont + 1;
        }
    }
    porcentagem = (double)cont * 100 / N;
    cout << fixed << setprecision(1);
    cout << "\nPessoas com menos de 16 anos: " << porcentagem << "%" << endl;

    for (i = 0; i < N; i++) {
        if (idade[i] < 16) {
            cout << nome[i] << endl;
        }
    }

    return 0;
}
