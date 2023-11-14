/**
 * Jose Barrera Ramos
 * Examen Final Herramientas Computacionales
 */

//Librerias
#include <bitset>

//Archivos
#include "operations.h"

using namespace std;

/**
 * @brief Esta funcion convierte un caracter en un valor ASCII
 * @param caracter
 * @return Devuelve un valor ASCII
 */
int getAscii(char caracter) {
    return (int)caracter;
}

/**
 * @brief Esta funcion devuelve el valor de bytes de un caracter
 * @param caracter
 * @return Devuelve un numero Binario
 */
string getBytes(char caracter) {
    bitset<8> binario(caracter);
    return binario.to_string();
}