//
// Created by Luciano Cauzzi on 19/01/23.
//
#include <iostream>

using namespace std;
/**
 * Il programma chiede di inserire le spese quotidiane e termina
 * con un alert se la spesa media supera il valore di 50
 */
int main() {
    cout << "While example" << endl;
    float daily_amount, mean, total;
    int day = 1;

    cout << "Inserisci la cifra spesa il primo giorno: " << endl;
    cin >> total;
    mean = total;

    while (mean <= 50 && day < 10){
        cout << "Inserisci la cifra spesa il giorno successivo: " << endl;
        cin >> daily_amount;
        total += daily_amount;
        day++;
        mean = total / (float) day;
    }

    if (mean > 50.){
        cout << endl << "Attenzione, hai superato il budget di 50 euro/giorno";
        cout << endl << "Ogni giorno hai speso in mean " << mean << " euro";
    } else {
        cout << endl << "Bene, non hai superato il budget" << endl;
    }
    return 0;
}