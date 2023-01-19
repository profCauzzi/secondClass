//
// Created by Luciano Cauzzi on 19/01/23.
//
#include <iostream>

using namespace std;

int main() {
    cout << "For decremento" << endl;

    cout << endl << "Conto alla rovescia da 10 a zero: " << endl;
    for (int i = 10; i >= 0; i--){
        cout << " " << i;
    }

    cout << endl << "Conto alla rovescia - solo pari: " << endl;
    for (int i = 10; i >= 0; i-=2){
        cout << " " << i;
    }
    return 0;
}
