#include <iostream>
#include <string>

#include "juego.cpp"
#include "eval.cpp"

using namespace std;


int main() {
    string eleccionUsuario;
    cout << "Hola, bienvenido";

    int puntuacion = 0;

    while (true) {
        cout << "Porfavor escoje entre: piedra, papel, tijera: ";
        cin >> eleccionUsuario;

        int valido = evaluadorDeRespuesta(eleccionUsuario);

        if (valido == 0) {
            cout << "No es una eleccion correcta";
        } 

        puntuacion = puntuacion + juego(valido, puntuacion);

        if (puntuacion == 3) {
            cout << "\nFELICIDADES: " << puntuacion << endl;
            cout << "\nLE HAS GANADO A UN ROBOT BASICO: " << puntuacion << endl;
            cout << "\nPuntuacion: " << puntuacion << endl;

            return 0;
        }

        cout << "Puntuacion: " << puntuacion << endl;

    }

}