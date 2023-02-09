//
// Created by Luciano Cauzzi on 09/02/23.
//
//
// Created by Luciano Cauzzi on 19/01/23.
//
#include <iostream>

using namespace std;

int main() {
    cout << "Do-While example" << endl;
    int guessed_number;
    cout << "Inserisci un numero intero da 1 a 10" << endl;

    do{
        cout << "Prova ad inserire un numero" << endl;
        cin >> guessed_number;

    } while(guessed_number != 5);

    cout << "Complimenti l'hai indovinato" << endl;

    return 0;
}