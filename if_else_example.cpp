//
// Created by Luciano Cauzzi on 19/01/23.
//
#include <iostream>

using namespace std;
/**
 * Verifica che il numero sia pari se compreso fra 1 e 10
 */
int main() {
    cout << "If else example" << endl;

    int number;

    cout << "Inserisci un numero compreso tra 1 e 10: " << endl;
    cin >> number;

    if (number >= 1 && number <= 10){
        if (number % 2 == 0){
            cout << "Il numero  " << number << "e' pari" << endl;
        } else {
            cout << "Il numero  " << number << "e' dispari" << endl;
        }
    } else {
        cout << "Il numero  non e' fra i valori consentiti" << endl;
    }

    return 0;
}