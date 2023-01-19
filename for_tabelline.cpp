//
// Created by Luciano Cauzzi on 19/01/23.
//
#include <iostream>

using namespace std;

int main() {
    cout << "For tabelline" << endl;
    int numero, i, tabellina;

    cout << "Inserisci un numero: " << endl;
    cin >> numero;

    cout << "La Tabellina del " << numero << " e': " << endl;

    // ciclo iterativo del for
    for (i=1; i <= 10; i++){
        tabellina = numero * i;
         cout << tabellina << endl;
    }
    return 0;
}
