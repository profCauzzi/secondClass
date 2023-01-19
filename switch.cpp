//
// Created by Luciano Cauzzi on 19/01/23.
//
#include <iostream>

using namespace std;

int main() {
    cout << "Switch example" << endl;
    int choice;
    float num1, num2;

    cout << "Inserisci due numeri: " << endl;
    cin >> num1 >> num2;

    cout << "Scegli l'operazione da effettuare: " << endl;
    cout << "*****************" << endl;
    cout << "1 - Somma" << endl;
    cout << "2 - Sottrai" << endl;
    cout << "3 - Moltiplica" << endl;
    cout << "4 - Dividi" << endl;
    cout << "*****************" << endl;

    // Nel caso del costrutto switch le diverse possibilità sono chiamate case
    switch (choice) {

        case 1:
            cout << endl << "La somma e' " << num1 + num2;
            break;

        case 2:
            cout << endl << "La sottrazione e' " << num1 - num2;
            break;

        case 3:
            cout << endl << "La moltiplicazione e' " << num1 * num2;
            break;

        case 4:
            cout << endl << "La moltiplicazione e' " << num1 / num2;
            break;

        default:
            cout << endl << "La choice non e' valida";
            break;
    }
    return 0;
}
