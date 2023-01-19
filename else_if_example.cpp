//
// Created by Luciano Cauzzi on 19/01/23.
//
#include <iostream>

using namespace std;
/**
 * Assegnamo ad ogni mese la corrispondente stagione
 */
int main() {
    cout << "Else if example" << endl;
    int month;

    cout << "Inserisci il numero del mese dell'anno (gennaio= 1, dicembre=12)" << endl;
    cin >> month;

    if (month >= 1 && month <= 12){

        if (month == 12 || month == 1 || month == 2){
            cout << "Alla fine del mese e' inverno" << endl;
        } else if (month > 2 && month < 6){
            cout << "Alla fine del mese e' primavera" << endl;
        } else if (month >= 6 && month <= 8){
            cout << "Alla fine del mese e' estate" << endl;
        } else {
            cout << "Alla fine del mese e' autunno" << endl;
        }

    } else {
        cout << "Il numero non corrisponde ad un mese" << endl;
    }

    return 0;
}