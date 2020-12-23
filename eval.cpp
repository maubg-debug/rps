#include <iostream>
#include <string>
using namespace std;


int evaluadorDeRespuesta(string eleccion) {
    if(eleccion.find("piedra") != std::string::npos) {
        return 1;
    } else if (eleccion.find("papel") != std::string::npos) {
        return 2;
    } else if (eleccion.find("tijera") != std::string::npos) {
        return 3;
    } else {
        return 0;
    }
}